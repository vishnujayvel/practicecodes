#include "iostream"
#include "stdlib.h"
using namespace std;
typedef struct node{
	int data;
	node *next;
}node;

void enque(node *&list,int data){

	node *newnode=(node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->next=NULL;
	if(list==NULL){
		list=newnode;
	}
	else{

		node *current=list;
		while(current->next!=NULL){
			//traverse
			current=current->next;
		}
		current->next=newnode;	
	}


}

void deque(node *&list){

	node *temp;
	temp=list;
	list=list->next;
	free(temp);

}

void traverse(node *list){

	while(list!=NULL){
		cout<<"\n"<<list->data;
		list=list->next;
	}

}

void printRecursive(node *list){

	if(list->next!=NULL){
		printRecursive(list->next);
	}
	cout<<endl<<list->data;

}


int main(){
	node *listHead=NULL;
	enque(listHead,1);
	enque(listHead,2);
	enque(listHead,3);

	traverse(listHead);
	deque(listHead);
	traverse(listHead);

	cout<<"\nprintRecursive\n";
	printRecursive(listHead);
	return 0;
}