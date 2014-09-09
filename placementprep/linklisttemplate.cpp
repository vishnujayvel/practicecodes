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

node* deleteNode(node* head,int data){
	if(head==NULL)
	    return NULL;
	 
		  while(head->data==data)
		     head=head->next;
		   if(head!=NULL){
			   node* rider=head->next;
			   node* prev=head;
			   while(rider!=NULL){
			     if(rider->data!=data){
					prev=rider;
					rider=rider->next;
					
				}
				else{
					prev->next=rider->next;
                    //free(rider);
                    rider=prev->next;
				}
			}
		}
			return head;
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
	while(rider){
		cout<<rider->data<<' ';
		rider=rider->next;
	}
	
}

int main(){
	node* head=NULL;
	node* head1=NULL;
	node* result;
	    
	   head=insertAtEnd(head,1);
	   head=insertAtEnd(head,2);
	   head=insertAtEnd(head,3);
	   
	   head1=insertAtEnd(head1,1);
	   head1=insertAtEnd(head1,0);
	   head1=insertAtEnd(head1,2);
	   head1=insertAtEnd(head1,3);
	   head1=insertAtEnd(head1,4);
	   node* head3=NULL;
	   head3=insertAtEnd(head3,1);
	   display(head3);
	   
    
	
}
