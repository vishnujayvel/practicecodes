#include<stdio.h>
#include<stdlib.h>
struct tree{
    int data;
    struct tree *child,*sibling;
};
void preorder(struct tree*p)
{
    if(p==NULL)return;
    printf(" %d",p->data);
    preorder(p->child);

    preorder(p->sibling);
}
struct tree* search(struct tree* root,int data)
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

struct tree* createNode(int data)
{
    struct tree* newnode= (struct tree*)malloc(sizeof(struct tree));
    newnode->child=NULL;
    newnode->sibling=NULL;
    newnode->data=data;
    return newnode;
}

struct tree* createnary(struct tree* root,int data[])
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
    for(j=0;j<data[1];j++)
    {
        //for first child
        if(j==0)
        {
             parent->child=createNode(data[j+2]);
             parent = parent->child;
        }
        //for all other childs
        else
        {
            parent->sibling=createNode(data[j+2]);
            parent = parent->sibling;
        }

    }

    if(root==NULL)
            root = newnode;
    return root;


}
int main()
{
    int row = 3;//no. of input lines
    //1st element in each row is node Value, 2nd - no of child, ,>=3rd....=>value of child
    int data[3][5]={{1,3,2,3,4},{2,2,5,6,0},{3,3,8,9,10}};
    int i;
    struct tree* root=NULL;
    for(i=0;i<row;i++)
    {
 //       preorder(root);
        root = createnary(root,data[i]);
    }

    preorder(root);
}
