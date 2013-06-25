#include "iostream"
#include "stdlib.h"
using namespace std;

//defining a structure for the Node in the linked-list
typedef struct ListNode{
	int data; //to store data
	struct ListNode *next; //to store reference to the next node
} ListNode;


void insertNode(int data,ListNode *head){

	if(head==NULL){
		head->next=temp;	
	}
	
	//creating a reference for a temp node
	ListNode *temp;
	//allocating space for that temp node
	temp = (ListNode*) malloc(sizeof(ListNode*));
	//assigning members of that temp node
	temp->data=data;
	temp->next=NULL;
	//making head refer to that temp node
	head=temp;

}

int traverseAndCount(ListNode *head){

	ListNode *current;
	current=head;
	int count=0;
	while(current->next!=NULL){
		cout<<current->data<<endl;
		count++;
		current->next=current->next->next;
	}
	return count;

}

int main(int argc, char const *argv[])
{
	//creating a reference for the head of the list
	ListNode *head;
	insertNode(10,head);
	insertNode(20,head);
	insertNode(30,head);
	insertNode(40,head);
	insertNode(50,head);
	cout<<"Count = "<<traverseAndCount(head);
	return 0;
}



