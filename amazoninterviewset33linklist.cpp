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
//simple ll insertion at end
//not working

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
node* add2Nodes(node* n1,node* n2,int carry){
	if(n1==	NULL&&n2==NULL&&carry==0){
		
		    
		return NULL;
	}
	node* result=newNode(carry);
	int sum=carry;
	if(n1)
	   sum+=n1->data;
    if(n2)
       sum+=n2->data;
    result->data=sum%10;//strip to single digit
    if(n1!=NULL&&n2!=NULL)
    result->next=add2Nodes(n1->next,n2->next,sum/10);//sum/10==1 if carry exists
    //make a chain of nodes and return the head
    
    return result;
}
void reverse(node *&head){
	node* current=head;
	node* prev=NULL;
	node* next;
	while(current){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
	
}
void reverseRecursive(node *&head){
	node* first=head;
	node* rest;
	if(head==NULL)
	  return;
	  rest=first->next;
    if(rest==NULL)
      return;
    reverseRecursive(rest);
    first->next->next=first;
    first->next=NULL;
    head=rest;
}
void display(node *head){
	node* rider=head;
	cout<<endl;
	while(rider){
		cout<<rider->data<<' ';
		rider=rider->next;
	}
	
}
/*void swapOddandEvenandLeaveLastNode(node* root){
	if(root==NULL)
	   return;
	struct node* odd,even;
	odd=root;
	even=root->next;
	while(odd&&even){
		node *temp=even;
		even->next=odd;
		odd->next=temp->next;
		odd=temp;
		odd=odd->next;
		even=odd->next->next;
		
	}
	display(node);
*/	
	
	

int main(){
	node* head=NULL;
	node* head1=NULL;
	node* result;
	
	   head=insertAtEnd(head,3);
	   head=insertAtEnd(head,1);
	   head=insertAtEnd(head,5);
	   

	   head1=insertAtEnd(head1,9);
	   head1=insertAtEnd(head1,9);
	   head1=insertAtEnd(head1,9);
    display(head);
    reverse(head);
    
    display(head);
    reverseRecursive(head);
    display(head);
    cout<<"\n\nAdd 2 lists ";
    result=add2Nodes(head,head1,0);
    display(result);
    
    //swapOddandEvenandLeaveLastNode(head);
    
    
    
	
}
