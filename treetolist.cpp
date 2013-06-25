#include<iostream>
using namespace std;

typedef struct node{
	int data;
	struct node* small;
	struct node* large;
}node;
void join(node* &a,node* &b){
	a->large=b;
	b->small=a;
} 
node* append(node* &a,node* &b){
	if(a==NULL)
	   return b;
   if(b==NULL)
       return a;
   node* aLast=a->small;
   node* bLast=b->small;
   join(aLast,b);
   join(bLast,a);
   return a;
}
node* treeToList(node* root){
	node *aList,*bList;
	if(root==NULL)
	   return NULL;
     aList=treeToList(root->small);
     bList=treeToList(root->large);
     root->large=root;
     root->small=root;
     aList=append(root,aList);
     aList=append(aList,bList);
     return aList;
}
node* newNode(int data){
	node* newnode=new(struct node);
	newnode->data=data;
	newnode->small=newnode->large=NULL;
	return newnode;
}

//given two circular doubly linked
//lists, append them and return the new list

node* treeInsert(node* node,int data){
	node *newnode=newNode(data);
	if(node==NULL)
	   return newnode;
    if(node->data>data)
       return treeInsert(node->small,data);
    else
       return treeInsert(node->large,data);
	
}

 void printList(Node* head) {
Node *current = head;
while(current != NULL) {
printf("%d ", current->data);
current = current->large;
if (current == head) break;
}
printf("\n");
}
int main() {
Node root* = NULL;
Node* head;
root=treeInsert(root, 4);
root=treeInsert(root, 2);
root=treeInsert(root, 1);
root=treeInsert(root, 3);
root=treeInsert(root, 5);
head = treeToList(root);
printList(head); /* prints: 1 2 3 4 5 */
return(0);
}
