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

void moveNodeToFront(node *&source,node *&dest){

	if(source!=NULL){
		if(dest==NULL){
			dest=source;
			source->next=NULL;
		}
		else{
			node *temp=dest;
			dest=source;
			dest->next=temp;
		}
	}
	else{
		cout<<"\nSource is NULL!!";
	}

}

void alternatingSplit(node *list,node *&l1,node *&l2){

	node *current=list;
	int swap=1;
	while(current!=NULL){
		node *next=current->next;
		if(swap==1){
			moveNodeToFront(current,l1);
		}
		else if(swap==2){
			moveNodeToFront(current,l2);
		}
		swap=(swap==1)?2:1;
		//cout<<endl<<swap;
		current=next;
	}

}

void alternatingSplitAliter(node *list,node *&l1,node *&l2){

	node *fast,*slow;
	fast=list;
	slow=list->next;
	while(fast){
		moveNodeToFront(fast,l1);
		moveNodeToFront(slow,l2);
		if(fast->next){
			fast=fast->next->next;
			slow=slow->next;
		}
		else
			break;
	}
	slow->next=NULL;

}

int main(int argc, char const *argv[])
{
	
	node *head=NULL;
	//push(head,5);
	push(head,4);
	push(head,3);
	push(head,2);
	push(head,1);
	push(head,0);
	//traverse(head);

	node *l1,*l2;
	l1=l2=NULL;
	alternatingSplitAliter(head,l1,l2);
	cout<<"\nL1:";
	traverse(l1);
	cout<<"\nL2:";
	traverse(l2);
	return 0;
}
