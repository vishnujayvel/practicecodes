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

void sortedInsert(node *&head,node *&fix){

	if(!head){
		fix->next=head;
		head=fix;
	}
	else if(fix->data<=head->data){
		fix->next=head;
		head=fix;	
	}
	else{
		node *current=head;
		while(current->next && current->next->data<=fix->data){

			current=current->next;
		}
		fix->next=current->next;
		current->next=fix;	
	}

}

void sortList(node *&head){

	node *result=NULL;
	node *current=head;
	node *next=NULL;
	while(current){

		next=current->next;
		sortedInsert(result,current);
		current=next;

	}
	head=result;

}

int main(int argc, char const *argv[])
{
	node *head=NULL;
	push(head,4);
	push(head,1);
	push(head,2);	
	push(head,5);
	traverse(head);
	sortList(head);
	traverse(head);
	return 0;
}