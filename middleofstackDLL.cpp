
#include <iostream>
#include <stdlib.h>
 using namespace std;
/* A Doubly Linked List Node */
struct DLLNode
{
    struct DLLNode *prev;
    int data;
    struct DLLNode *next;
};
 
/* Representation of the stack data structure that supports findMiddle()
   in O(1) time.  The Stack is implemented using Doubly Linked List. It
   maintains pointer to head node, pointer to middle node and count of
   nodes */
struct myStack
{
    struct DLLNode *head;
    struct DLLNode *mid;
    int count;
};

struct myStack* createMyStack(){
	struct myStack *ms=new myStack();
	ms->count=0;
	return ms;
}

void push(struct myStack* &ms,int newData){
	struct DLLNode* newNode=new DLLNode();
	newNode->prev=NULL;
	newNode->next=ms->head;
	newNode->data=newData;
	ms->count++;
	if(ms->count==1){
		ms->mid=newNode;
	}
	else{
		ms->head->prev=newNode;
		if(ms->count&1)
		     ms->mid=ms->mid->prev;
	}
   ms->head=newNode;
}
int pop(struct myStack* ms){
	struct DLLNode* head=ms->head;
	if(ms->count==0){
		cout<<"stack underflow";
		return -1;
	}
	int item=head->data;
	ms->head=head->next;
	if(ms->head!=NULL)
	ms->head->prev=NULL;
	ms->count--;
	if((ms->count&1)==0)
	       ms->mid=ms->mid->next;
	
	
	free(head);
	return item;
}

int getMiddleElement(struct myStack* ms){
	if(ms->count==0){
	   cout<<"stack is empty";
	   return -1;
   }
	return ms->mid->data;
}
int main()
{
    /* Let us create a stack using push() operation*/
    struct myStack *ms = createMyStack();
    push(ms, 11);
    push(ms, 22);
    push(ms, 33);
    push(ms, 44);
    push(ms, 55);
    push(ms, 66);
    push(ms, 77);
 
    cout<<"\nItem popped is"<< pop(ms);
    cout<<"\nItem popped is "<<pop(ms);
    cout<<"\nMiddle Element is "<<getMiddleElement(ms);
    return 0;
}
	
   
	

