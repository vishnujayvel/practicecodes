#include<iostream>
using namespace std;

struct node
{
  int data;
  struct node *next;
};
struct node* createNewNode(int data){
	struct node* nn=new struct node();
	nn->data=data;
	nn->next=NULL;
	return nn;
}
struct node* sortedInsert(node *head,int data){
	struct node* newNode=createNewNode(data);
	struct node* current=head;
	if(current==NULL){//if the circular LL is empty
		
		newNode->next=newNode;
		head=newNode;
	}
	else if(current->data>=newNode->data){// if newNode has to be inserted before the head
		while(current->next!=head){
			current=current->next;
		}
		current->next=newNode;
		newNode->next=head;
		head=newNode;
	}
	else{//if the newNode has to be inserted somewhere inbetween the list
		while(current->next!=head&&current->next->data<newNode->data)
		       current=current->next;
			   newNode->next=current->next;
			   current->next=newNode;
	}
	return head;
}
void printList(struct node *start)
{
  struct node *temp;
 
  if(start != NULL)
  {
    temp = start;
    cout<<endl;
    do {
      cout<<temp->data<<" ";
      temp = temp->next;
    } while(temp != start);
  }
}
 
int main()
{
 
  struct node *head = NULL;
  
 
  for(int  i = 6; i>0; i--)
  {
    head=sortedInsert(head,i);
  }
 
  printList(head);
 
  return 0;
}		   
			        
	
	
	
