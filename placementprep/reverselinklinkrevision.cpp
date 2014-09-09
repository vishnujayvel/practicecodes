#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* Link list node */
struct node
{
    int data;
    struct node* next;
};
 
/* Reverses the linked list in groups of size k and returns the 
   pointer to the new head node. */
struct node *reverse (struct node *head, int k)
{
    struct node* current = head;
    struct node* next;
    struct node* prev = NULL;
    int count = 0;   
     
    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k)
    {
       next  = current->next;
       current->next = prev;
       prev = current;
       current = next;
       count++;
    }
     
    /* next is now a pointer to (k+1)th node 
       Recursively call for the list starting from current.
       And make rest of the list as next of first node */
    if(next !=  NULL)
    {  head->next = reverse(next, k); }
 
    /* prev is new head of the input list */
    return prev;
}
 struct node *reverseBetween(struct node *head, int m, int n) {
	 cout<<"calling reverseBetween";
        int i=1;
        if(head->next==NULL||m==n)
         return head;
        struct node* prevChunkLastNode=NULL;
        struct node* rider=head;
        while(i<=n){
            if(i==m){
            struct node* current=rider;
            struct node* prev=NULL;
            struct node* next;
            while(current!=NULL&&i<=n-m+1){
                next=current->next;
                current->next=prev;
                prev=current;
                current=next;
            }
            head->next=current;
            if(prevChunkLastNode)
                prevChunkLastNode->next=prev;
            else
                head=prev;
            
                 
            }
            else{
                prevChunkLastNode=rider;
                rider=rider->next;
            }
        }
        return head;
    }
 
/* UTILITY FUNCTIONS */
/* Function to push a node */
void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
 
    /* put in the data  */
    new_node->data  = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);    
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
 
/* Function to print linked list */
void printList(struct node *node)
{cout<<"calling";
    while(node != NULL)
    {   cout<<"fs";
        printf("%d  ", node->data);
        node = node->next;
    }
}    
 
/* Drier program to test above function*/
int main(void)
{
    /* Start with the empty list */
    struct node* head = NULL;
  
     /* Created Linked list is 1->2->3->4->5->6->7->8 */
     push(&head, 3);
     push(&head, 5);
     //push(&head, 6);
     //push(&head, 5);
    // push(&head, 4);
     //push(&head, 3);
     //push(&head, 2);
     //push(&head, 1);           
 
     printf("\n Given linked lis\n");
     printList(head);
   //  head = reverse(head, 3);
 head=reverseBetween(head,1,2);
     printf("\n Reversed Linked list \n");
     printList(head);
 
     getchar();
     return(0);
}
