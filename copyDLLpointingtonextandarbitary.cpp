//  http://www.geeksforgeeks.org/a-linked-list-with-next-and-arbit-pointer/
/*
 * 1) Create the copy of node 1 and insert it between node 1 & node 2 in original Linked List, create the copy of 2 and insert it between 2 & 3.. Continue in this fashion, add the copy of N afte the Nth node
2) Now copy the arbitrary link in this fashion

     original->next->arbitrary = original->arbitrary->next;  /*TRAVERSE 
TWO NODES
This works because original->next is nothing but copy of original and Original->arbitrary->next is nothing but copy of arbitrary.
3) Now restore the original and copy linked lists in this fashion in a single loop.

     original->next = original->next->next;
     copy->next = copy->next->next;
4) Make sure that last element of original->next is NULL.

Time Complexity: O(n)
Auxiliary Space: O(1)
*/
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* arbit;
    struct node* next;
};
struct node *newNode(int data)
{
    struct node *new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->arbit = NULL;
    return new_node;
}
void printList(struct node *node)
{
    while(node != NULL)
    {
       if(node->next==NULL)
        {
             printf("next and arbitary of %d is NULL and %d \n",node->data ,node->arbit->data);
        }
        else
        printf("next and arbitary of %d is %d and %d \n",node->data ,node->next->data,node->arbit->data);
        node = node->next;
    }
    printf("\n");
}
void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node = newNode(new_data);
  
    /* link the old list off the new node */
    new_node->next = (*head_ref);
  
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
struct node* copyList(struct node*original)
{
   struct node* copy;
   struct node* copy_i;
   struct node* copyNode;
   struct node* original_i=original;
   struct node* temp;
  
   while(original_i!=NULL){
	   temp=original_i->next;
	   copyNode=newNode(original_i->data);
	   original_i->next=copyNode;
	   copyNode->next=temp;
	   original_i=temp;
}
  copy=original->next;
  copy_i=copy;
  original_i=original;
  while(original_i!=NULL){
	  copy_i->arbit=original->arbit->next;
	  if(copy_i->next!=NULL)
	  copy_i=copy_i->next->next;
	  original_i=original_i->next->next;
	  
  }
  copy_i=copy;
  original_i=original;
  while(original_i!=NULL){
	  original_i->next=original_i->next->next;
	  if(copy_i->next!=NULL)
	  copy_i->next=copy_i->next->next;
      
      original_i=original_i->next;
      copy_i=copy_i->next;
  }
  return copy;
  
  	  
}
  
 int main()
{
    struct node* original=NULL, *copy;
    push(&original, 5);
    push(&original, 4);
    push(&original, 3);
    push(&original, 2);
    push(&original, 1);
    original->arbit = original->next->next;
    original->next->arbit = original;
    original->next->next->arbit = original->next->next->next->next;
    original->next->next->next->arbit = original->next->next;
    original->next->next->next->next->arbit = original->next;
    printList(original);
    copy = copyList(original);
    printf("copy of the linklist with next and arbit pointer\n");
    printList(copy);
    return 0;
}
