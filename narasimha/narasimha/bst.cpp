#include "iostream"
#include "stdlib.h"
using namespace std;

typedef struct treeNode{
	int data;
	treeNode *left;
	treeNode *right;
} treeNode;

int lookup(treeNode* node, int target) {
	
	if (node == NULL) {
		return 0;
	}
	else {
		
		if (target == node->data) 
			return 1;
		else {
			
			if (target < node->data) 
				return(lookup(node->left, target));
			else 
				return(lookup(node->right, target));
		}
	}
}

treeNode* createNewNode(int data){
	treeNode *newnode = new(treeNode);
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
}

static void insert(treeNode *&tree,int data){

	treeNode *newnode=createNewNode(data);


	if(tree==NULL){
		tree=newnode;
	}
	else{

		if(data<tree->data){
			insert(tree->left,data);
		}
		else{
			insert(tree->right,data);
		}
	}
}


void preorder(treeNode *tree){

	if(tree!=NULL){
		cout<<endl<<tree->data;
		preorder(tree->left);
		preorder(tree->right);
	}
}

void inorder(treeNode *tree){
	if(tree!=NULL){
		inorder(tree->left);
		cout<<endl<<tree->data;
		inorder(tree->right);
	}	
}

void postorder(treeNode *tree){
	if(tree!=NULL){
		postorder(tree->left);
		postorder(tree->right);
		cout<<endl<<tree->data;
	}	
}

int main(){

	treeNode *root=NULL;
	insert(root,2);
	insert(root,1);
	insert(root,3);
	insert(root,4);
	cout<<"\npre";
	preorder(root);
	cout<<"\nin";
	inorder(root);
	cout<<"\npost";
	postorder(root);
	return 0;
}