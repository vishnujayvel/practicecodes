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
struct node* newNode(int data){
	struct node* node=new(struct node);
	node->data=data;
	node->left=node->right=NULL;
	return node;
	
}
struct node* insert(struct node* node,int data){
	if(node==NULL)
	  return (newNode(data));
    if(data<=node->data)
        node->left=insert(node->left,data);
    else
        node->right=insert(node->right,data);
        return node;
        
}

   
node* binToList(node* root){
	
	if(root==NULL)
	 return root;
	if(root->left!=NULL){
		node* left;
	    
		left=binToList(root->left);
		for(;left->right!=NULL;left=left->right);
		left->right=root;
		root->left=left;
	}
	if(root->right!=NULL){
		node* right;
		right=binToList(root->right);
		for(;right->left!=NULL;right=right->left);
		root->right=right;
		right->left=root;
	}
	return root;
	
}

node* convertToDLL(node* root){
	if(root==NULL)
	     return root;
	 root=binToList(root);
	 for(;root->left!=NULL;root=root->left);
	   return root;
   }
int main(){
	struct node* root=NULL;
	root=insert(root,4);
	root=insert(root,2);
	root=insert(root,5);
	root=insert(root,1);
	root=insert(root,3);
	
	
	node* list=convertToDLL(root);
	for(;list!=NULL;list=list->right)
	cout<<list->data<<" ";
}
