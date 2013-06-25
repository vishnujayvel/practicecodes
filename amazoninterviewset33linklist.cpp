#include<iostream>
using namespace std;
typedef struct node{
	int data;
	struct node* next;
}node;

 node* newNode(int data){
	 node* node=new(struct node);
	node->data=data;
	node->next=NULL;
	return node;
	
}
//simple ll insertion at end
//not working

node* insertAtEnd(node *head,int data){
if(head==NULL)
   return(newNode(data));
else{
	node* rider=head;
	while(rider->next){
		rider=rider->next;
		
		
	}
	rider->next=newNode(data);
	return head;//i return head always only for this case its useful
}
     
}
void reverse(node *&head){
	node* current=head;
	node* prev=NULL;
	node* next;
	while(current){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
	
}
void reverseRecursive(node *&head){
	node* first=head;
	node* rest;
	if(head==NULL)
	  return;
	  rest=first->next;
    if(rest==NULL)
      return;
    reverseRecursive(rest);
    first->next->next=first;
    first->next=NULL;
    head=rest;
}
void display(node *head){
	node* rider=head;
	cout<<endl;
	while(rider){
		cout<<rider->data<<' ';
		rider=rider->next;
	}
	
}
/*void swapOddandEvenandLeaveLastNode(node* root){
	if(root==NULL)
	   return;
	struct node* odd,even;
	odd=root;
	even=root->next;
	while(odd&&even){
		node *temp=even;
		even->next=odd;
		odd->next=temp->next;
		odd=temp;
		odd=odd->next;
		even=odd->next->next;
		
	}
	display(node);
*/	
	
	

int main(){
	node* head=NULL;
	for(int i=0;i<6;i++)
	   head=insertAtEnd(head,i);
    display(head);
    reverse(head);
    
    display(head);
    reverseRecursive(head);
    display(head);
    //swapOddandEvenandLeaveLastNode(head);
    
    
    
	
}
