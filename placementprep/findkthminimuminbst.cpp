
#include<iostream>
#include<queue>
#include<map>
#include<climits>
#include<stack>
#include<stdio.h>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
};
int max(int a,int b){
	if(a>=b)
	  return a;
	  else
	   return b;
}

int min(int a,int b){
	if(a<=b)
	   return a;
	   else
	   return b;
}

struct node* newNode(int data){
	struct node* node=new(struct node);
	node->data=data;
	node->left=node->right=NULL;
	return node;
	
}
//insert into BST
struct node* insert(struct node* node,int data){
	if(node==NULL)
	  return (newNode(data));
    if(data<=node->data)
        node->left=insert(node->left,data);
    else
        node->right=insert(node->right,data);
        return node;
        
}

void inorder(struct node* node){
	if(node==NULL)
	  return;
    inorder(node->left);
    cout<<node->data<<' ';
    inorder(node->right);
    
    
}
void preorder(struct node* node){//doubt
	if(node==NULL)
	  return;
     cout<<node->data<<' ';
    preorder(node->left);
    preorder(node->right);
}
void postOrder(struct node* node){
	if(node==NULL)
	  return;
     postOrder(node->left);
     postOrder(node->right);
     cout<<node->data<<' ';
}

void printStack(stack<struct node*> s){
	stack<struct node*>t=s;
	while(!t.empty()){
	  cout<<t.top()->data;
		t.pop();
   }
  }
int findKthMinimum(node *head,int k){
    stack<struct node*> s;
    s.push(head);
    node* temp;
    while((temp=head->left)!=NULL){
		s.push(temp);
		head=head->left;
	}
	while(!s.empty()){
		temp=s.top();
		s.pop();
		if(!--k){
			break;
		}
		if(temp->right){
			temp=temp->right;
			s.push(temp);
			while((temp=temp->left)!=NULL){
				s.push(temp);
			}
		}
	}
	//printStack(s);
	return temp->data;
}
int main(){
	struct node* root=NULL;
	root=insert(root,54);
	root=insert(root,2);
	root=insert(root,5);
	root=insert(root,1);
	root=insert(root,3);
	cout<<"inorder ";
	inorder(root);
	cout<<endl;
	cout<<findKthMinimum(root,4);
}
