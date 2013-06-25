//amazon internships set 1
//spiral order traversal
#include<iostream>
#include<queue>
#include<stack>
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
void spiralOrderTraversal(struct node* node){
	stack<struct node*> current,next;//current level and next level
	current.push(node);//pushing root initially
	bool lefttoright=true;
	while(!current.empty()){
		struct node* currNode=current.top();
		current.pop();
		if(currNode){
		 cout<<currNode->data<<' ';
		if(lefttoright){
			next.push(currNode->left);
			next.push(currNode->right);
		}
		else{
			next.push(currNode->right);
			next.push(currNode->left);
		}
		if(current.empty()){
			cout<<endl;
			lefttoright=!lefttoright;
			stack<struct node*> temp=current;//swap
			
			current=next;
			next=temp;
		}
	}
	}
	
	
}
void printPathArray(int path[],int len){
	cout<<endl;
	for(int i=0;i<len;i++)
	  cout<<path[i]<<' ';
}
void printPath(struct node* node,int path[],int len){
	if(node==NULL)
	    printPathArray(path,len);
    else{
    	path[len++]=node->data;
    	printPath(node->left,path,len);
    	printPath(node->right,path,len);
    }
}

int main(){
	struct node* root=NULL;
	root=insert(root,4);
	root=insert(root,2);
	root=insert(root,5);
	root=insert(root,1);
	root=insert(root,3);
	printTree(root,0);
	cout<<"Spiral order traversal\n";
	spiralOrderTraversal(root);
	int path[100];
	//printPath(root,path,0);
}
