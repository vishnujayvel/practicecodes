#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
using namespace std;
struct tree{
    string data;
    struct tree *child,*sibling;
};
void preorder(struct tree*p)
{
    if(p==NULL)return;
    cout<<p->data<<" ";
    preorder(p->child);

    preorder(p->sibling);
}
struct tree* search(struct tree* root,string data)
{
    if(root==NULL)
        return NULL;
    if(data==root->data)
        return root;
    struct tree* t = search(root->child,data);
    if(t==NULL)
         t = search(root->sibling,data);
    return t;

}
struct tree* searchSib(struct tree* root,string data)
{
    if(root==NULL)
        return NULL;
    if(data==root->data)
        return root;
        
         return searchSib(root->sibling,data);
    

}
struct tree* createNode(string data)
{
    struct tree* newnode= (struct tree*)malloc(sizeof(struct tree));
    newnode->child=NULL;
    newnode->sibling=NULL;
    newnode->data=data;
    return newnode;
}

struct tree* createnary(struct tree* root,int n,string data[])
{

    //check if node exist already

    struct tree * newnode = search(root,data[0]);
    //if node does not exist
    if(newnode==NULL)
    {
        newnode= createNode(data[0]);
    }

    struct tree* parent=newnode;
    /////now create node of its children
    int j;
    for(j=0;j<n;j++)
    {
        //for first child
        if(j==0)
        {
             if(searchSib(parent->child,data[j+1])==NULL){
             if(parent->child==NULL){
             parent->child=createNode(data[j+1]);
           }
			else
			parent->child->sibling=createNode(data[j+1]);
			parent = parent->child;
			
		 }
        }
        //for all other childs
        else
        {
            parent->sibling=createNode(data[j+1]);
            parent = parent->sibling;
        }

    }

    if(root==NULL)
            root = newnode;
    return root;


}
int main()
{
    int row = 2;//no. of input lines
    //1st element in each row is node Value, 2nd - no of child, ,>=3rd....=>value of child
    string data[10][10]={{"home","gcj","finals"},{"home","gcj","qual"}};
    
    int i;
    struct tree* root=NULL;
    for(i=0;i<row;i++)
    {
 //       preorder(root);
        root = createnary(root,row,data[i]);
    }

    preorder(root);
}
