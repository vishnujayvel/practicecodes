#include "iostream"
#include "stdlib.h"
#include "map"

using namespace std;
typedef struct node
{
	int data;
	struct node *next;
} node;

//this func doesnt return anything
//it just modifies the "list"
void insertNodeAsTail(node *&list,int data){
	
	//create a node
	node *tail;
	tail=(node*)malloc(sizeof(node));
	tail->next=NULL;
	tail->data=data;

	node *current=list;
	//if the given list is an empty list..ie it has no node
	if(current!=NULL){
		//traverse to list tail
		while(current->next!=NULL){
			current=current->next;
		}
		//put that new node at tail's next
		current->next=tail;
	}
	//the list is not empty
	else{
		//assign the new node as the list itself
		list=tail;
	}

}
void removeDuplicate(node *&head){
	map<int,int>m;
	node *head1=head;
	node *previous;
	while(head1!=NULL){
		if(m[head1->data]==1){
			previous->next=head1->next;
			head1=head1->next;
			cout<<"yes";
		}
		else{
			m[head1->data]=1;
			previous=head1;
			 head1=head1->next;
		}
	}
}

void printNthNodeFromLast1(node *head,int n){
	static int i=0;
	if(head==NULL)
       return;
	 else{
	 	printNthNodeFromLast1(head->next,n);
	 	if(++i==n)
	 	   cout<<"\n"<<n<<"th node from last is"<<head->data;
	 }	
	
	
	
}
void printNthNodeFromLast2(node *head,int n){
	node *p1,*p2;
	p1=head;
	p2=head;
	for(int i=0;i<n-1;i++){
		if(p2==NULL)
		   return ;
        p2=p2->next;
	}
	while(p2->next!=NULL){
		p2=p2->next;
		p1=p1->next;
	}
	
		cout<<"\n"<<n<<"th node from last is"<<p1->data;
	
}
void deleteMidNode(node *&head){
	if(head==NULL||head->next==NULL||head->next->next==NULL)
	  cout<<"sfsffsff";//cannot be applied if list is null or has 1 or 2 element 
    else{
	  
		node *p1,*p2,*pre;
		p1=p2=head;
		while(p2->next!=NULL&&p2->next->next!=NULL){
			p2=p2->next->next;
			pre=p1;
			p1=p1->next;
		}
		pre->next=p1->next;
    }
}
void traverse(node *head){

	node *temp=head;
	int count=1;
	while(temp!=NULL){
		cout<<"\nData in node "<<count<<" : "<<temp->data;
		temp=temp->next;
		count++;
	}
}

void insertNodeAtPosition(node *&list,int data,int pos){

	//create newnode
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	newnode->data=data;

	if(pos==1 || list==NULL){
		//insert as head
		newnode->next=list;
		list=newnode;
	}
	else{

		//traverse to that position 
		node *current=list;
		int currentPos=1;
		while(currentPos<pos-1 && current->next!=NULL){
			currentPos++;
			current=current->next;
		}


		if(currentPos==pos-1){
			newnode->next=current->next;
			current->next=newnode;
		}
		else{
			//the list ends before that position
				//throw err
			cout<<"the list has no node at position "<<pos;
		}	

	}
	

}

void deleteNodeAtPosition(node *&list,int pos){

	node *current=list;
	int currentPos=1;
	if(pos==1){
		//node to be deleted is the head
		node *head=current->next;
		list=head;
	}
	else{
		//node to be deleted is somewhere in the middle or end
		//go to that pos
		while(currentPos<pos-1 && current!=NULL){
			current=current->next;
			currentPos++;
		}
		//make link changes
		current->next=(current->next)->next;
		//free(current->next);	
	}

}

void reverse(node *&list){
	node *current,*next,*reversed;
	current=list;
	reversed=NULL;
	while(current!=NULL){
		next=current->next;
		current->next=reversed;
		reversed=current;

		current=next;
	}

	list=reversed;
}

int main(){

	node *head=NULL;
	cout<<"initially..";
	insertNodeAsTail(head,10);
	insertNodeAsTail(head,2);
	//insertNodeAsTail(head,3);
	/*insertNodeAsTail(head,4);
	insertNodeAsTail(head,6);
	insertNodeAsTail(head,6);
	insertNodeAsTail(head,6);*/
	traverse(head);

	//cout<<"\n\nafter inserting a new node ";
	//insertNodeAtPosition(head,400000,3);
	//traverse(head);

	cout<<"\n\nafter removing duplicate  node";
	//deleteNodeAtPosition(head,5);
	//traverse(head);
	
	//removeDuplicate(head);
	traverse(head);
	printNthNodeFromLast1(head,3);
	printNthNodeFromLast2(head,3);
    deleteMidNode(head);
    traverse(head);
    

	//cout<<"\n\nafter reversing the list";
	//reverse(head);
	//traverse(head);

	return 0;

}
