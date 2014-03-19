
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

node* deleteNode(node* head,int data){
	node* slow=head;
	node* fast=head;
	while(fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
		   cout<<"loop present.They meet at "<<fast->data<<" ";
		   break;
	   }
	}
	   
	   slow=head;
	   node* last=fast;
	   while(slow!=fast){
		   
		    last=fast;
		   slow=slow->next;
		   fast=fast->next;
	   }
	   cout<<"\n loop starts at "<<slow->data<<" last node is "<<last->data;
	   last->next=NULL;
	   cout<<"list after deleting the loop ";
	   display(head);
	  
	   if(head->data==data){
	      head=head->next;
	      return head;
	  }
	      node* rider=head->next;
	      node* prev=head;
	      while(rider!=NULL){
			  if(rider->data==data){
				  cout<<"\nprev node of node to be deleted"<<prev->data<<"" ;
				  prev->next=rider->next;
				  rider=prev->next;
				  cout<<"\nnext is "<<prev->next->data;
				  break;
			  }
			  prev=rider;
			  rider=rider->next;
		  }
         cout<<"\n list after deleting the node";
         display(head);		
		  node* n1=head;
		  node* n2=head;
		  while(n2->next!=NULL){
			  n1=n1->next;
			  n2=n2->next->next;
		  }
		  cout<<"\nmiddle node after deleting  is "<<n1->data;
		  cout<<"\nlast node after deleting is "<<n2->data;
		  n2->next=n1;
	  
 }
int main(){
	node* head=NULL;
	
	    
	   head=insertAtEnd(head,1);
	   head=insertAtEnd(head,2);
	   head=insertAtEnd(head,3);
	   head=insertAtEnd(head,4);
	   head=insertAtEnd(head,5);
	   head=insertAtEnd(head,6);
	  
	   head->next->next->next->next->next->next=head->next->next;
	   
	   
	  // display(head);
	   deleteNode(head,3);
    
    
	
}
