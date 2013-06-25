#include "stdlib.h"
#include "iostream"
using namespace std;
typedef struct node{
	int data;
	node *left;
	node *right;
} node;

node* createNode(int data){

	node *newnode=new(node);
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}

static void insert(node *&tree,int data){
	node *newnode=createNode(data);
	if(tree==NULL){
		tree=newnode;
	}
	else{

		if(data<=tree->data)
			insert(tree->left,data);
		else
			insert(tree->right,data);
	}
}

void postorder(node *tree){

	if(tree!=NULL){
		postorder(tree->left);
		postorder(tree->right);
		cout<<endl<<tree->data;
	}

}

void multiplyX(node *&tree, int factor){
	if(tree!=NULL){
		multiplyX(tree->left,factor);
		multiplyX(tree->right,factor);
		tree->data*=factor;		
	}
}

void alternative0sAnd1s(int count){
	int prev1=0;
	int x=prev1;
	for(int i=0;i<count;i++){
		cout<<endl;
		for(int j=0;j<=i;j++){
			cout<<x;
			x=x==0?1:0;
			
		}
		x=prev1=prev1==0?1:0;
	}
}


void alternative0sAnd1sUsingArrays(int count){

	int *arr=new int[count];

}
int main(){

	node *root=NULL;
	insert(root,1);
	insert(root,2);
	insert(root,3);
	insert(root,4);
	postorder(root);
	multiplyX(root,5);
	postorder(root);
	alternative0sAnd1s(4);
	return 0;
}