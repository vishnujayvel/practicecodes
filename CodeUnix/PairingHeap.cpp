        #include "PairingHeap.h"
        #include "dsexceptions.h"

        /**
         * Construct the pairing heap.
         */
        template <class Comparable>
        PairingHeap<Comparable>::PairingHeap( )
        {
            root = NULL;
        }


        /**
         * Copy constructor
         */
        template <class Comparable>
        PairingHeap<Comparable>::PairingHeap( const PairingHeap<Comparable> & rhs )
        {
            root = NULL;
            *this = rhs;
        }

        /**
         * Destroy the leftist heap.
         */
        template <class Comparable>
        PairingHeap<Comparable>::~PairingHeap( )
        {
            makeEmpty( );
        }

        /**
         * Insert item x into the priority queue, maintaining heap order.
         * Return a pointer to the node containing the new item.
         */
        template <class Comparable>
        PairNode<Comparable> *
        PairingHeap<Comparable>::insert( const Comparable & x )
        {
            PairNode<Comparable> *newNode = new PairNode<Comparable>( x );

            if( root == NULL )
                root = newNode;
            else
                compareAndLink( root, newNode );
            return newNode;
        }

        /**
         * Find the smallest item in the priority queue.
         * Return the smallest item, or throw Underflow if empty.
         */
        template <class Comparable>
        const Comparable & PairingHeap<Comparable>::findMin( ) const
        {
            if( isEmpty( ) )
                throw Underflow( );
            return root->element;
        }

        /**
         * Remove the smallest item from the priority queue.
         * Throws Underflow if empty.
         */
        template <class Comparable>
        void PairingHeap<Comparable>::deleteMin( )
        {
            if( isEmpty( ) )
                throw Underflow( );

            PairNode<Comparable> *oldRoot = root;

            if( root->leftChild == NULL )
                root = NULL;
            else
                root = combineSiblings( root->leftChild );

            delete oldRoot;
        }

        /**
         * Remove the smallest item from the priority queue.
         * Pass back the smallest item, or throw Underflow if empty.
         */
        template <class Comparable>
        void PairingHeap<Comparable>::deleteMin( Comparable & minItem )
        {
            minItem = findMin( );
            deleteMin( );
        }

        /**
         * Test if the priority queue is logically empty.
         * Returns true if empty, false otherwise.
         */
        template <class Comparable>
        bool PairingHeap<Comparable>::isEmpty( ) const
        {
            return root == NULL;
        }

        /**
         * Test if the priority queue is logically full.
         * Returns false in this implementation.
         */
        template <class Comparable>
        bool PairingHeap<Comparable>::isFull( ) const
        {
            return false;
        }

        /**
         * Make the priority queue logically empty.
         */
        template <class Comparable>
        void PairingHeap<Comparable>::makeEmpty( )
        {
            reclaimMemory( root );
            root = NULL;
        }

        /**
         * Deep copy.
         */
        template <class Comparable>
        const PairingHeap<Comparable> &
        PairingHeap<Comparable>::operator=( const PairingHeap<Comparable> & rhs )
        {
            if( this != &rhs )
            {
                makeEmpty( );
                root = clone( rhs.root );
            }

            return *this;
        }

        /**
         * Internal method to make the tree empty.
         * WARNING: This is prone to running out of stack space.
         */
        template <class Comparable>
        void PairingHeap<Comparable>::reclaimMemory( PairNode<Comparable> * t ) const
        {
            if( t != NULL )
            {
                reclaimMemory( t->leftChild );
                reclaimMemory( t->nextSibling );
                delete t;
            }
        }

        /**
         * Change the value of the item stored in the pairing heap.
         * Does nothing if newVal is larger than currently stored value.
         * p points to a node returned by insert.
         * newVal is the new value, which must be smaller
         *    than the currently stored value.
         */
        template <class Comparable>
        void PairingHeap<Comparable>::decreaseKey( PairNode<Comparable> *p,
                                                   const Comparable & newVal )
        {
            if( p->element < newVal )
                return;    // newVal cannot be bigger
            p->element = newVal;
            if( p != root )
            {
                if( p->nextSibling != NULL )
                    p->nextSibling->prev = p->prev;
                if( p->prev->leftChild == p )
                    p->prev->leftChild = p->nextSibling;
                else
                    p->prev->nextSibling = p->nextSibling;
 
                p->nextSibling = NULL;
                compareAndLink( root, p );
            }
        }

        /**
         * Internal method that is the basic operation to maintain order.
         * Links first and second together to satisfy heap order.
         * first is root of tree 1, which may not be NULL.
         *    first->nextSibling MUST be NULL on entry.
         * second is root of tree 2, which may be NULL.
         * first becomes the result of the tree merge.
         */
        template <class Comparable>
        void PairingHeap<Comparable>::
        compareAndLink( PairNode<Comparable> * & first,
                        PairNode<Comparable> *second ) const
        {
            if( second == NULL )
                return;

            if( second->element < first->element )
            {
                // Attach first as leftmost child of second
                second->prev = first->prev;
                first->prev = second;
                first->nextSibling = second->leftChild;
                if( first->nextSibling != NULL )
                    first->nextSibling->prev = first;
                second->leftChild = first;
                first = second;
            }
            else
            {
                // Attach second as leftmost child of first
                second->prev = first;
                first->nextSibling = second->nextSibling;
                if( first->nextSibling != NULL )
                    first->nextSibling->prev = first;
                second->nextSibling = first->leftChild;
                if( second->nextSibling != NULL )
                    second->nextSibling->prev = second;
                first->leftChild = second;
            }
        }

        /**
         * Internal method that implements two-pass merging.
         * firstSibling the root of the conglomerate;
         *     assumed not NULL.
         */
        template <class Comparable>
        PairNode<Comparable> *
        PairingHeap<Comparable>::
        combineSiblings( PairNode<Comparable> *firstSibling ) const
        {
            if( firstSibling->nextSibling == NULL )
                return firstSibling;

                // Allocate the array
            static vector<PairNode<Comparable> *> treeArray( 5 );

                // Store the subtrees in an array
            int numSiblings = 0;
            for( ; firstSibling != NULL; numSiblings++ )
            {
                if( numSiblings == treeArray.size( ) )
                    treeArray.resize( numSiblings * 2 );
                treeArray[ numSiblings ] = firstSibling;
                firstSibling->prev->nextSibling = NULL;  // break links
                firstSibling = firstSibling->nextSibling;
            }
            if( numSiblings == treeArray.size( ) )
                treeArray.resize( numSiblings + 1 );
            treeArray[ numSiblings ] = NULL;

                // Combine subtrees two at a time, going left to right
            int i = 0;
            for( ; i + 1 < numSiblings; i += 2 )
                compareAndLink( treeArray[ i ], treeArray[ i + 1 ] );

            int j = i - 2;

                // j has the result of last compareAndLink.
                // If an odd number of trees, get the last one.
            if( j == numSiblings - 3 )
                compareAndLink( treeArray[ j ], treeArray[ j + 2 ] );

                // Now go right to left, merging last tree with
                // next to last. The result becomes the new last.
            for( ; j >= 2; j -= 2 )
                compareAndLink( treeArray[ j - 2 ], treeArray[ j ] );
            return treeArray[ 0 ];
        }

        /**
         * Internal method to clone subtree.
         * WARNING: This is prone to running out of stack space.
         */
        template <class Comparable>
        PairNode<Comparable> *
        PairingHeap<Comparable>::clone( PairNode<Comparable> * t ) const
        {
            if( t == NULL ) 
                return NULL;
            else
            {
                PairNode<Comparable> *p = new PairNode<Comparable>( t->element );
                if( ( p->leftChild = clone( t->leftChild ) ) != NULL )
                    p->leftChild->prev = p;
                if( ( p->nextSibling = clone( t->nextSibling ) ) != NULL )
                    p->nextSibling->prev = p;
                return p;
            }
        }

