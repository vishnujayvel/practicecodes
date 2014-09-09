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
node* reverse(node* head,int k){
	node* prev=NULL;
	node* current=head;
	node* next;
	int count=0;
	while(current!=NULL&&count<k){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
		count++;
	}
	cout<<"chunk";
	display(prev);
	if(next!=NULL){
		head->next=reverse(next,k);
	}
	return prev;
}
int main(){
	node* head=NULL;
	node* head1=NULL;
	node* result;
	    
	   
	   head1=insertAtEnd(head1,1);
	   head1=insertAtEnd(head1,10);
	   head1=insertAtEnd(head1,2);
	   head1=insertAtEnd(head1,3);
	   head1=insertAtEnd(head1,4);
	   display(head1);
	   head=reverse(head1,3);
		display(head1);
    
    
	
}
