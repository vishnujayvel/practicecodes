
#include<iostream>
using namespace std;
typedef struct node{
	int data;
	struct node* next;
}node;

 node* newNode(int data){
	 node* node=new(struct node);
	node->data=data;
	node->next=NULL;
	return node;
	
}

		   
node* insertAtEnd(node *head,int data){
if(head==NULL)
   return(newNode(data));
else{
	node* rider=head;
	while(rider->next){
		rider=rider->next;
		
		
	}
	rider->next=newNode(data);
	return head;//i return head always only for this case its useful
}
     
}
void display(node *head){
	node* rider=head;
	cout<<endl;
	while(rider!=NULL){
		cout<<rider->data<<' ';
		rider=rider->next;
	}
	
}
node* swapPairusingPointer(node* head){
	node* newHead=NULL;
	node* n=head;
	node* temp=NULL;
	while(n!=NULL&&n->next!=NULL){
		if(temp!=NULL)//temp is nothing but prev
		  temp->next->next=n->next;
		
		
		temp=n->next;
		n->next=n->next->next;
		temp->next=n;
		if(newHead==NULL)
		   newHead=temp;
		   n=n->next;
	   }
	   return newHead;
		
		
}
node* reverseKNodes(node* head,int k){
	int i=0;
     node* curr=head;
     node* prev=NULL;
     node* next;
     while(curr!=NULL&&i<k){
		 next=curr->next;
		 curr->next=prev;
		 prev=curr;
		 curr=next;
		 i++;
		 }
		 head->next=next;
		 head=prev;
		 return head;
	 }
		 
int main(){
	node* head=NULL;
	
	    
	   head=insertAtEnd(head,1);
	   head=insertAtEnd(head,2);
	   head=insertAtEnd(head,3);
	   head=insertAtEnd(head,4);
	   head=insertAtEnd(head,5);
	   head=insertAtEnd(head,6);
	   //head=reverseKNodes(head,6);
	   display(head);
	   
	   head=swapPairusingPointer(head);
	   display(head);  
	   
    
    
	
}
