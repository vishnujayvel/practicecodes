#include "iostream"
#include "stdlib.h"

using namespace std;
typedef struct node
{
	int data;
	struct node *next;
} node;

void traverse(node *list){
	while(list){
		cout<<endl<<list->data;
		list=list->next;
	}
}

void push(node *&head,int data){

	node *newnode=new(node);
	newnode->data=data;

	if(head==NULL){
		head=newnode;
		head->next=NULL;
	}
	else{
		newnode->next=head;
		head=newnode;
	}
}

void split(node *list,node *&frontList,node *&backList){

	node *fast,*slow;
	fast=slow=list;
	frontList=slow;
	while(fast!=NULL){

		fast=fast->next->next;
		slow=slow->next;
	}
	backList=slow->next;
	slow->next=NULL;
	
}

int main(int argc, char const *argv[])
{
	
	node *head=NULL;
	push(head,5);
	push(head,4);
	push(head,3);
	push(head,2);
	push(head,1);
	//traverse(head);

	node *frontList,*backList;
	frontList=backList=NULL;
	split(head,frontList,backList);
	//traverse(backList);
	traverse(frontList);
	return 0;
}
