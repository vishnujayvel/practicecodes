/*
Given singly linked consisting of each character in a node ,
modify linked list such that vowels are at the 
beginning maintaining other character order.
Example

A->M->A->Z->O->N(input)

A->A->O->M->Z->N(output)
*/

#include "iostream"
#include "stdlib.h"

using namespace std;
typedef struct node
{
	char data;
	struct node *next;
} node;


void push(node *&list,char data){

	node *newnode=new(node);
	newnode->data=data;

	if(list==NULL){
		list=newnode;
	}
	else{
		newnode->next=list;
		list=newnode;
	}

}

void traverse(node *list){
	while(list){
		cout<<endl<<list->data;
		list=list->next;
	}
}

int isVowel(char data){
	if(data=='a'||data=='e'||data=='i'||data=='o'||data=='u')
		return 1;
	return 0;
}

void convert(node *head){
/*Example

A->M->A->Z->O->N(input)

A->A->O->M->Z->N(output)
*/
	/*
	find a vowel
	make it as head
		if head is again a vowel, make it head->next
		if head->next again is a vowel, make it head->next->next
		so, traverse till a consonant is found and place 
		it in front of the first consonant
	*/

	node *temp=NULL;
	node *current=head;
	while(current){

		char data=current->next->data;
		if(isVowel(data)){
			//push it infront of the 1st consonant
			//and free it
			//node *left=current;
			node *toFree=current->next;
			//node *right==current->next->next;

			//find the first consonant
			temp=head;
			while(temp){

				if(!isVowel(temp->next->data)){
					//we find the node with the 1st consonant
					//push a new node before that node
					node *newnode=new (node);
					newnode->data=data;
					newnode->next=temp->next->next;
					temp->next=newnode;
					cout<<"\nfound the 1st consonant :"<<temp->next->data;
				}
				//moveon
				temp=temp->next;

			}

			//free that node
			current->next=toFree->next;
			free(toFree);

			//moveon
			current=current->next;
		}

	}




}

int main(){

	node *head=NULL;
	push(head,'n');
	push(head,'o');
	push(head,'z');
	push(head,'a');
	push(head,'m');
	push(head,'a');
	traverse(head);

	convert(head);
	traverse(head);
	return 0;
}