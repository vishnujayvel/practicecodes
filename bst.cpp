#include<iostream>
#include<queue>
#include<map>
#include<climits>
#include<stack>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
};
int max(int a,int b){
	if(a>=b)
	  return a;
	  else
	   return b;
}

int min(int a,int b){
	if(a<=b)
	   return a;
	   else
	   return b;
}

/*
 * The main idea of the solution is — While traversing Binary Search Tree
 *  from top to bottom, the first node n we encounter with value between 
 * n1 and n2, i.e., n1 < n < n2 is the Lowest or Least Common Ancestor(LCA)
 *  of n1 and n2 (where n1 < n2). So just traverse the BST in pre-order, 
 * if you find a node with value in between n1 and n2 then n is the LCA, 
 * if it's value is greater than both n1 and n2 then our LCA lies on left side of the node, if 
 * it's value is smaller than both n1 and n2 then LCA lies on right side.
 *  */
int leastCommonAncestor(node* root,int n1, int n2){
	if(root==NULL||root->data==n1||root->data==n2)
	  return -1;
	if((root->right!=NULL)&&(root->right->data==n1||root->right->data==n2))
	 return root->data;
    if((root->left!=NULL)&&(root->left->data==n1||root->left->data==n2))
      return root->data;
    if(root->data>n1&&root->data<n2)
      return root->data;
    if(root->data>n1&&root->data>n2)
       return leastCommonAncestor(root->left,n1,n2);
    if(root->data<n1&&root->data<n2)
       return leastCommonAncestor(root->right,n1,n2);
  }
      

int getMaxCompleteLevel(node* node){
	if(node==NULL||!(node->left)||!(node->right))
	   return 0;
	int l=getMaxCompleteLevel(node->left);
	int r=getMaxCompleteLevel(node->right);
	return 1+min(l,r);	
}
bool isPresent(node* node,int n){
	if(node==NULL)
	   return false;
	if(node->data==n)
	   return true;
	return isPresent(node->left,n)||isPresent(node->right,n);
}

bool isBothNodesinSamePathFromRoot(node* node,int n1,int n2){
	if(node==NULL)
	   return false;
	if(node->data==n1)
	   return isPresent(node,n2);
	if(node->data==n2)
	   return isPresent(node,n1);
	return isBothNodesinSamePathFromRoot(node->left,n1,n2)||isBothNodesinSamePathFromRoot(node->right,n1,n2);
}
int kthMaximumNode(node* node,int k){//not working
	if(node){
	
	static int count=0;
	
		kthMaximumNode(node->right,k);
		count++;
		if(count==k)
		   return node->data;
        
        kthMaximumNode(node->left,k);
    }
	
}
bool printAncestors(node* node,int data){
	if(node==NULL)
	   return 0;
	   if(node->left->data==data||node->right->data==data||printAncestors(node->left,data)||printAncestors(node->right,data))
         {
         cout<<node->data<<" ";
         return 1;
     }
     return 0;
      
}
struct node* newNode(int data){
	struct node* node=new(struct node);
	node->data=data;
	node->left=node->right=NULL;
	return node;
	
}

bool isIdentical(node* n1,node* n2){
	if(n1==NULL&&n2==NULL)
	   return true;
	if(n1==NULL&&n2!=NULL||n2==NULL&&n1!=NULL)
	   return false;
	   
	 else
	  return isIdentical(n1->left,n2->left)&&isIdentical(n1->right,n2->right);
	
	
	
}

void nonRecursiveInorderTraversal(node *root){
	stack<node*> s;
	cout<<endl;
	while(1){
	
	while(root){
		s.push(root);
		root=root->left;
	}
	if(s.empty())
	   break;
	   root=s.top();
	   s.pop();
	   cout<<root->data<<" ";
	   root=root->right;
	  
   }
} 

//to correct a BST in which 2 nodes are swapped
/*void correctBST(struct node* root){
	static struct node* temp1=NULL,temp2=NULL,prev=NULL;
	static bool found=0;
	if(found)
	    return;
	if(root){
		correctBST(root->left);
		if(!prev)
		     prev=root->left;
        if(!temp1&&prev&&root->data<prev->data)
             temp1=prev;
        else if(!temp2&&prev&&root->data<prev->data)
             temp2=root;
        if(temp1&&temp2&&!found){
        	swap(&temp1,&temp2);
        	found=1;
        	return;
        	
        }
        prev=root;
        correctBST(root->right);
        
	}
}
*/
int getLeafCount(node* node){
	if(node==NULL)
	   return 0;
    if(node->left==NULL&&node->right==NULL)
       return 1;
     else
       return getLeafCount(node->left)+getLeafCount(node->right);
}
void verticalSum(node* node,map<int,int>& m,int col){
	if(node==NULL)
	   return;
     map<int,int>::iterator it=m.find(col);
     //finds the position of (key,value) pair or the end pointer if no such pair is found
     if(it==m.end())
         m.insert(pair<int,int>(col,node->data));
      else
         it->second+=node->data;
     verticalSum(node->left,m,col-1);
     verticalSum(node->right,m,col+1);
}
bool isBST(node* node,int low,int high){
	if(node==NULL)
	    return true;
     if(low<node->data&&node->data<high){
     	return( isBST(node->left,low,node->data)&&isBST(node->right,node->data,high));
    	
     }
     else
       return false;
}
int maxDepth(struct node* node){
	if(node==NULL)
	  return 0;
   else
   
     return max(maxDepth(node->left),maxDepth(node->right))+1;
     
	
	
}

int minDepth(struct node* node){
	if(node==NULL)
	   return 0;
    else
    return min(minDepth(node->left),minDepth(node->right))+1;
     
}

bool isBalanced(struct node* node){
 	if(maxDepth(node)-minDepth(node)<=1)
 	  return true;
    else
     return false;
     
}   

bool hasPathSum(struct node *node,int sum){
	if(node==NULL)
	   return (sum==0);
    else{
    	sum=sum-node->data;
    	return(hasPathSum(node->left,sum)||hasPathSum(node->right,sum));
    }
}






struct node* insert(struct node* node,int data){
	if(node==NULL)
	  return (newNode(data));
    if(data<=node->data)
        node->left=insert(node->left,data);
    else
        node->right=insert(node->right,data);
        return node;
        
}
//checks whether a data is present in the node of the tree
bool lookup(struct node* node,int target){
	if(node==NULL)
	 return false;
	 else{
	 
	if(node->data==target)
	  return true;
    else if(node->data>=target)
     return lookup(node->left,target);
    else 
     return lookup(node->right,target);
}
     
     
}
void inorder(struct node* node){
	if(node==NULL)
	  return;
    inorder(node->left);
    cout<<node->data<<' ';
    inorder(node->right);
    
    
}
void preorder(struct node* node){//doubt
	if(node==NULL)
	  return;
     cout<<node->data<<' ';
    preorder(node->left);
    preorder(node->right);
}
void postOrder(struct node* node){
	if(node==NULL)
	  return;
     postOrder(node->left);
     postOrder(node->right);
     cout<<node->data<<' ';
}
void getPostOrderPredecessor(node* node,int i){
	static int prev=-1;
	if(node==NULL)
	   return ;
    
	   getPostOrderPredecessor(node->left,i);
	   getPostOrderPredecessor(node->right,i);
	   if(node->data==i)
	       cout<<prev;
       else
           {
           	prev=node->data;
           }
          
	   
}
int size(struct node* node){
	static int count=0;
	if(node==NULL){
		return count;
	}
	   
    else return size(node->left)+size(node->right)+1;
    
}

void printTree( node *tp, int spaces )
{
  int i;
 
  if( tp != NULL )
  {
    printTree( tp->right, spaces + 3 );
    for( i = 0; i < spaces; i++ )
      cout <<' ';
    cout << tp->data << endl;
    printTree( tp->left, spaces + 3 );
  }
}

int minValue(struct node *node){
	if(node!=NULL){
	
	   
    	if(node->left==NULL)
               return node->data;
	    else 
		      return(minValue(node->left));    	      
    }
}
void printPathArray(int path[],int len){
	for(int i=0;i<len;i++)
	    cout<<path[i]<<' ';
     cout<<endl;
}

void printRecursivePath(struct node* node,int path[],int len){
	if(node==NULL)
	    return;
    
    	path[len++]=node->data;
    	if(node->left==NULL&&node->right==NULL)
    	    printPathArray(path,len);
	    else{
	    //otherwise recursively traverse both subtree
    	printRecursivePath(node->left,path,len);
    	printRecursivePath(node->right,path,len);
    	
    }
}
void printPath(struct node* node){
	int path[100];
	printRecursivePath(node,path,0);
}

//this code is to print path upto length N
void printRecursivePathuptoN(struct node* node,int path[],int len,int N){
	if(node==NULL)
	    return;
    
    	path[len++]=node->data;
    	if(node->left==NULL&&node->right==NULL||len==N){
    	 
    	    printPathArray(path,len);
    	}
	    else{
	    //otherwise recursively traverse both subtree
    	printRecursivePathuptoN(node->left,path,len,N);
    	printRecursivePathuptoN(node->right,path,len,N);
    	
    }
}
void printPathuptoN(struct node* node,int N){
	int path[100];
	printRecursivePathuptoN(node,path,0,N);
}

void printNodeAtKDistanceFromRoot(node* node,int k){
	if(node==NULL)
	   return;
     if(k==0){
     
        cout<<node->data<<" ";
        return;
    }
     else{
     
        printNodeAtKDistanceFromRoot(node->left,k-1);
        printNodeAtKDistanceFromRoot(node->right,k-1);
    }
        
}
void swap(struct node* &a,struct node* &b){
	struct node* temp=a;
    a=b;
    b=temp;
}
void mirror(struct node* node){
	if(node==NULL)
	    return;
   else{
   	    
        mirror(node->left);
        mirror(node->right);
        swap(node->left,node->right);
   }
		
}
struct node* convertArrayToBinaryTree(int arr[],int start,int end){
	if(end<start)
		return NULL;
		int mid=(start+end)/2;
		node* node=newNode(arr[mid]);
		node->left=convertArrayToBinaryTree(arr,start,mid-1);
		node->right=convertArrayToBinaryTree(arr,mid+1,end);
		return node;

}
int getLevelOfNode(struct node* node,int datainnode,int level){
	   if(node==NULL)
	      return 0;
	      else{
	      if(node->data==datainnode)
	        return level;
          else
		    return (getLevelOfNode(node->left,datainnode,level+1))|(getLevelOfNode(node->right,datainnode,level+1));      
       
           
   		}
	
}

void levelOrder(struct node* root){

 queue<node*>q;
 struct node* node;
 if(root!=NULL)
     q.push(root);
	 while(!q.empty()){
	 	node=q.front();
	 	cout<<node->data<<' ';
	 	q.pop();
	 	if(node->left!=NULL)
	 	q.push(node->left);
	 	if(node->right!=NULL)
	 	q.push(node->right);
	 }	
}


int main(){
	struct node* root=NULL;
	root=insert(root,4);
	root=insert(root,2);
	root=insert(root,5);
	root=insert(root,1);
	root=insert(root,3);
	cout<<"inorder ";
	inorder(root);
	cout<<endl;
	cout<<"preorder ";
	preorder(root);
	cout<<endl;
	cout<<"postorder ";
	postOrder(root);
	cout<<endl;
	cout<<"postorder predecessor of 4 is ";
	getPostOrderPredecessor(root,4);
	printTree(root,0);
	cout<<"ancestors of 3 are ";
	printAncestors(root,3);
	mirror(root);
	cout<<endl;
	printTree(root,0);
	cout<<endl<<"leaf count is"<<getLeafCount(root)<<endl;
	printTree(root,0);
	mirror(root);//mirror again to undo the intial mirror
	cout<<"Inorder traversal";
	nonRecursiveInorderTraversal(root);
	cout<<endl;
	map<int,int> m;
	map<int,int>::iterator iter;
	cout<<"\nvertical sum ";
	verticalSum(root,m,0);
	for(iter=m.begin();iter!=m.end();iter++){
		cout<<iter->second<<" ";
	}
	cout<<"\nsize is "<<size(root);
	int k1=3;
	cout<<"\nKth maximum node where k = "<<k1<<" is "<<kthMaximumNode(root,k1);
	cout<<"\nis BST? "<<isBST(root,INT_MIN,INT_MAX);
	cout<<"\nmaxdepth is "<<maxDepth(root);
	cout<<"\nminimum value is "<<minValue(root);
	cout<<"\nhasPathSum 45 ? "<<hasPathSum(root,45);
	cout<<"\nhasPathSum 9 ? "<<hasPathSum(root,9);
	cout<<"\nAll paths of the tree\n";
///	root=insert(root,89);
//	root=insert(root,10);
	printTree(root,0);
	
	printPath(root);
	cout<<"\nAll paths of the tree upto N=2";

	printTree(root,0);
	printPathuptoN(root,2);
	
	
	int k=2;
	cout<<"\n\n\nPrinting nodes at distance "<<k<<" from root";
	printNodeAtKDistanceFromRoot(root,k);
   	
	cout<<"\nisBalanced? "<<isBalanced(root) ;
	int arr[]={5,4,3,2,1};
	node* arrTree=convertArrayToBinaryTree(arr,0,4);
	int arr2[]={5,4,3,2,1,0};
	node* arrTree1=convertArrayToBinaryTree(arr2,0,5);
	
	cout<<"\narrayTree\n\n";
	printTree(arrTree,0);
	cout<<"\nlca of 3 and 1 is "<<leastCommonAncestor(arrTree1,3,1);
	cout<<"\n\nlevel of 4 in array tree is "<<getLevelOfNode(arrTree,4,0);
	cout<<"\nlevel order traversal of array tree is ";
	levelOrder(arrTree); 
	cout<<"\nisIdentical ? "<<isIdentical(root,arrTree);
	cout<<"\n Maximum complete level of the tree "<<getMaxCompleteLevel(arrTree);
	cout<<"\n is both node 1,3 in same path from root?"<<isBothNodesinSamePathFromRoot(arrTree,1,3);
	
	cout<<"\n is both node 5,2 in same path from root?"<<isBothNodesinSamePathFromRoot(arrTree,5,2);
}

