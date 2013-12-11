#include<iostream>
using namespace std;

typedef struct node{
	int data;
	struct node *next;
	struct node *prev;
	
}node;
node* reverse(node* head){
	node* current=head;
	node* temp;
	while(current!=NULL){
		temp=current->prev;
		current->prev=current->next;
		current->next=temp;
		current=current->prev;
		
	}
	if(temp!=NULL)
	return temp->prev;
}
node* newNode(int data){
	node *node=new(struct node);
	node->next=NULL;
	node->prev=NULL;
	node->data=data;
	return node;
}
node* insert(node *head,int data,int position){
	node* newnode=newNode(data);
	if(head==NULL)
	   return newnode;
	if(position==1){
		newnode->next=head;
		newnode->prev=NULL;
		head->prev=newnode;
		head=newnode;
		return head;
		
	}
	node* temp=head;
	for(int i=1;i<position-1&&temp->next!=NULL;i++){
		temp=temp->next;
	}
	if(temp->next==NULL){
		newnode->next=temp->next;
		newnode->prev=temp;
		temp->next=newnode;
	
	}
	else{
		newnode->next=temp->next;
		newnode->prev=temp;
		temp->next->prev=newnode;
		temp->next=newnode;
	}
	return head;
}
void display(node *head){
	node* rider=head;
	cout<<endl;
	while(rider){
		cout<<rider->data<<' ';
		rider=rider->next;
	}
	
}
node* deleteNode(node *head,int position){
	node* temp=head;
	node* temp1;
	if(head==NULL){
		return head;
	}
	 
	if(position==1){
		head=head->next;
		if(head!=NULL)
		head->prev=NULL;
		delete(temp);
		return head;
	}
	for(int i=1;i<position&&temp->next!=NULL;i++){
		temp=temp->next;
	}
	if(temp->next==NULL){//last element
		temp1=temp->prev;
		temp1->next=NULL;
		delete(temp);
		
	}
	else{
		temp1=temp->prev;
		temp1->next=temp->next;
		temp->next->prev=temp1;
		delete(temp);
	}
	return head;
}
int main(){
	node* head=NULL;
	head=insert(head,1,1);
	head=insert(head,22,2);
	head=insert(head,23,3);
	head=insert(head,12,2);
	display(head);
	head=deleteNode(head,4);
	display(head);
	head=reverse(head);
	display(head);
}
