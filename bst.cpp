#include<iostream>
#include<queue>
#include<map>
#include<climits>
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

void verticalSum(node* node,map<int,int>& m,int col){
	if(node==NULL)
	   return;
     map<int,int>::iterator it=m.find(col);
     //finds the position of (key,value) pair or the end pointer if no such pair is found
     if(it==m.end())
         m.insert(pair<int,int>(col,node->data));
      else
         it->second+=node->data;
     verticalSum(node->left,m,col-1);
     verticalSum(node->right,m,col+1);
}
bool isBST(node* node,int low,int high){
	if(node==NULL)
	    return true;
     if(low<node->data&&node->data<high){
     	return( isBST(node->left,low,node->data)&&isBST(node->right,node->data,high));
    	
     }
     else
       return false;
}
int maxDepth(struct node* node){
	if(node==NULL)
	  return 0;
   else
   
     return max(maxDepth(node->left),maxDepth(node->right))+1;
     
	
	
}

int minDepth(struct node* node){
	if(node==NULL)
	   return 0;
    else
    return min(minDepth(node->left),minDepth(node->right))+1;
     
}

bool isBalanced(struct node* node){
 	if(maxDepth(node)-minDepth(node)<=1)
 	  return true;
    else
     return false;
     
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
	if(node==NULL){
		return count;
	}
	   
    else return size(node->left)+size(node->right)+1;
    
}
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

//this code is to print path upto length N
void printRecursivePathuptoN(struct node* node,int path[],int len,int N){
	if(node==NULL)
	    return;
    
    	path[len++]=node->data;
    	if(node->left==NULL&&node->right==NULL||len==N){
    	 
    	    printPathArray(path,len);
    	}
	    else{
	    //otherwise recursively traverse both subtree
    	printRecursivePathuptoN(node->left,path,len,N);
    	printRecursivePathuptoN(node->right,path,len,N);
    	
    }
}
void printPathuptoN(struct node* node,int N){
	int path[100];
	printRecursivePathuptoN(node,path,0,N);
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
struct node* convertArrayToBinaryTree(int arr[],int start,int end){
	if(end<start)
		return NULL;
		int mid=(start+end)/2;
		node* node=newNode(arr[mid]);
		node->left=convertArrayToBinaryTree(arr,start,mid-1);
		node->right=convertArrayToBinaryTree(arr,mid+1,end);
		return node;

}
int getLevelOfNode(struct node* node,int datainnode,int level){
	   if(node==NULL)
	      return 0;
	      else{
	      if(node->data==datainnode)
	        return level;
          else
		    return (getLevelOfNode(node->left,datainnode,level+1))|(getLevelOfNode(node->right,datainnode,level+1));      
       
           
   		}
	
}

void levelOrder(struct node* root){

 queue<node*>q;
 struct node* node;
 if(root!=NULL)
     q.push(root);
	 while(!q.empty()){
	 	node=q.front();
	 	cout<<node->data<<' ';
	 	q.pop();
	 	if(node->left!=NULL)
	 	q.push(node->left);
	 	if(node->right!=NULL)
	 	q.push(node->right);
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
	map<int,int> m;
	map<int,int>::iterator iter;
	cout<<"\nvertical sum ";
	verticalSum(root,m,0);
	for(iter=m.begin();iter!=m.end();iter++){
		cout<<iter->second<<" ";
	}
	cout<<"\nsize is "<<size(root);
	cout<<"\nis BST? "<<isBST(root,INT_MIN,INT_MAX);
	cout<<"\nmaxdepth is "<<maxDepth(root);
	cout<<"\nminimum value is "<<minValue(root);
	cout<<"\nhasPathSum 45 ? "<<hasPathSum(root,45);
	cout<<"\nhasPathSum 9 ? "<<hasPathSum(root,9);
	cout<<"\nAll paths of the tree\n";
///	root=insert(root,89);
//	root=insert(root,10);
	printTree(root,0);
	printPath(root);
	cout<<"\nAll paths of the tree upto N=2";

	printTree(root,0);
	printPathuptoN(root,2);
	
   	
	cout<<"\nisBalanced? "<<isBalanced(root) ;
	int arr[]={5,4,3,2,1};
	node* arrTree=convertArrayToBinaryTree(arr,0,4);
	cout<<"\narrayTree\n\n";
	printTree(arrTree,0);
	cout<<"\n\nlevel of 4 in array tree is "<<getLevelOfNode(arrTree,4,0);
	cout<<"\nlevel order traversal of array tree is ";
	levelOrder(arrTree); 
}

