#include<iostream>
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


bool hasPathSum(struct node *node,int sum){
	if(node==NULL)
	   return (sum==0);
    else{
    	sum=sum-node->data;
    	return(hasPathSum(node->left,sum)||hasPathSum(node->right,sum));
    }
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
//checks whether a data is present in the node of the tree
bool lookup(struct node* node,int target){
	if(node==NULL)
	 return false;
	 else{
	 
	if(node->data==target)
	  return true;
    else if(node->data>=target)
     return lookup(node->left,target);
    else 
     return lookup(node->right,target);
}
     
     
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
int size(struct node* node){
	static int count=0;
	if(node==NULL)
	   return count;
    else return size(node->left)+size(node->right)+1;
}
int max(int a,int b){
	if(a>=b)
	  return a;
	  else
	   return b;
}

int maxDepth(struct node* node){//doubt
	int ldepth,rdepth;
	if(node==NULL)
	  return 0;
   else {
   	ldepth=maxDepth(node->left);
   	rdepth=maxDepth(node->right);
   	if(ldepth>rdepth)
   	  return ldepth+1;
    else
      return rdepth+1;
   }
   
}

void printTree( node *tp, int spaces )
{
  int i;
 
  if( tp != NULL )
  {
    printTree( tp->right, spaces + 3 );
    for( i = 0; i < spaces; i++ )
      cout <<' ';
    cout << tp->data << endl;
    printTree( tp->left, spaces + 3 );
  }
}

int minValue(struct node *node){
	if(node!=NULL){
	
	   
    	if(node->left==NULL)
               return node->data;
	    else 
		      return(minValue(node->left));    	      
    }
}
void printPathArray(int path[],int len){
	for(int i=0;i<len;i++)
	    cout<<path[i]<<' ';
     cout<<endl;
}

void printRecursivePath(struct node* node,int path[],int len){
	if(node==NULL)
	    return;
    
    	path[len++]=node->data;
    	if(node->left==NULL&&node->right==NULL)
    	    printPathArray(path,len);
	    else{
	    //otherwise recursively traverse both subtree
    	printRecursivePath(node->left,path,len);
    	printRecursivePath(node->right,path,len);
    	
    }
}
void printPath(struct node* node){
	int path[100];
	printRecursivePath(node,path,0);
}


void swap(struct node* &a,struct node* &b){
	struct node* temp=a;
    a=b;
    b=temp;
}
void mirror(struct node* node){
	if(node==NULL)
	    return;
   else{
   	    
        mirror(node->left);
        mirror(node->right);
        swap(node->left,node->right);
   }
		
}

int main(){
	struct node* root=NULL;
	root=insert(root,4);
	root=insert(root,2);
	root=insert(root,5);
	root=insert(root,1);
	root=insert(root,3);
	cout<<"inorder ";
	inorder(root);
	cout<<endl;
	cout<<"preorder ";
	preorder(root);
	cout<<endl;
	cout<<"postorder ";
	postOrder(root);
	cout<<endl;
	printTree(root,0);
	mirror(root);
	cout<<endl;
	printTree(root,0);
	cout<<"\nsize is "<<size(root);
	cout<<"\nmaxdepth is "<<maxDepth(root);
	cout<<"\nminimum value is "<<minValue(root);
	cout<<"\nhasPathSum 45 ? "<<hasPathSum(root,45);
	cout<<"\nhasPathSum 9 ? "<<hasPathSum(root,9);
	cout<<"\nAll paths of the tree\n";
	printPath(root);
}

