/*to print the middle of a given linked list*/
#include "iostream"
#include "stdlib.h"

using namespace std;
typedef struct node
{
	int data;
	struct node *next;
} node;


void insertNodeAsTail(node *&list,int data){

	node *newnode=new(node);
	newnode->data=data;
	newnode->next=NULL;

	if(list==NULL){
		list=newnode;
	}
	else{
		node *curr=list;
		while(curr->next!=NULL){
			curr=curr->next;
		}
		curr->next=newnode;
	}

}

void traverse(node *list){
	while(list){
		cout<<endl<<list->data;
		list=list->next;
	}
}

void findMiddle(node *list){

	node *fast,*slow;
	fast=slow=list;
	while(fast){

		//iterate
		fast=fast->next->next;
		slow=slow->next;
	}
	cout<<"\nMiddle node's data : "<<slow->data;
}

int main(){


	node *head=NULL;
	cout<<"initially..";
	insertNodeAsTail(head,1);
	insertNodeAsTail(head,2);
	insertNodeAsTail(head,3);
	insertNodeAsTail(head,4);
	insertNodeAsTail(head,5);
	insertNodeAsTail(head,6);
	traverse(head);

	findMiddle(head);

}