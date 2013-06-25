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


int main(){

	node *head=NULL;
	

	return 0;
}