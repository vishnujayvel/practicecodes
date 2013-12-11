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

node* add2Nodes1(node* n1,node* n2,int carry){
	int sum;
	node* result=newNode(0);
	if(n1==NULL&&n2==NULL&&carry==0)
	  return NULL;
	 else if(n1==NULL&&n2==NULL&&carry!=0)
	  return newNode(carry);
	if(n1!=NULL&&n2!=NULL){
		sum=n1->data+n2->data+carry;
		carry=sum/10;
		result->data=sum%10;
		result->next=add2Nodes1(n1->next,n2->next,carry);
	}
	else{
		if(n1!=NULL){
	   sum=n1->data+carry;
	   carry=sum/10;
	   result->data=sum%10;
	   result->next=add2Nodes1(n1->next,NULL,carry);
   }
     else{
		  sum=n2->data+carry;
		  carry=sum/10;
		  result->data=sum%10;
		  result->next=add2Nodes1(NULL,n2->next,carry);
	  }
  }
   return result;
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

/*
void deleteEveryKthNode(node* &head,int k){
	if(k<=0)
	   return;
	if(k==1)
	    head=NULL;
	if(
*/
void deleteDuplicates(node *&head){
	node* prev=head;
	node* curr=head->next;
	node* rider;
	while(curr!=NULL){
		for(rider=head;rider!=curr;rider=rider->next){//checking for duplicate
			  if(rider->data==curr->data){
				     node* temp=curr->next;
				     prev->next=temp;//or prev->next=prev->next->next;  
				     curr=temp;
				     break;
				 }
			 }
			      if(rider==curr){//if there is no duplicate
					 prev=curr;
					 curr=curr->next;
		          }	    
		 }
	 }
	
/*

node* reverseRecursive(node *head){
	node* result;
	if(head->next!=NULL){
	    result=reverseRecursive(head->next);
		result->next=head;
		head->next=NULL;
		return head;
	}
	else{
		return (head);
	}
}
	
*/	
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
	
	//program to swap pairs in linklist
node* swapPairusingPointer(node* head){
	node* temp=NULL;
	node* newRoot=NULL;
	node* n=head;
	while(n!=NULL&&n->next!=NULL){
         if(temp!=NULL)
              temp->next->next=n->next;
          temp=n->next;
          n->next=n->next->next;
          temp->next=n; 
          if(newRoot==NULL)
             newRoot=temp;
           n=n->next;
		 }
		 return newRoot;
	 }
void swapPairsUsingValue(node *head){
	if(head==NULL)
	  return ;
	node* p=head;
	node* q=head->next;
	int temp;
	while(q){
		temp=p->data;
		p->data=q->data;
		q->data=temp;
		p=q->next;
		q=p?p->next:0;
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
	   display(head);
	   cout<<"deleting all 9 ";
	   head=deleteNode(head,9);
	   display(head);
	   cout<<" deleted all 9 :)";
	   deleteDuplicates(head);
    display(head);
    
   // reverse(head);
    
    display(head);
    //head=reverseRecursive(head);
    cout<<"My new TRY";display(head);
    cout<<"\nList 1";
    display(head);
    cout<<"\nlist 2";
    display(head1);
    
    cout<<"\n\nAdd 2 lists ";
    result=add2Nodes(head,head1,0);
    display(result);
    head=result;
    head=swapPairusingPointer(head);
    display(head);
    swapPairsUsingValue(head);
    display(head);
    
    //swapOddandEvenandLeaveLastNode(head);
    
    
    
	
}
