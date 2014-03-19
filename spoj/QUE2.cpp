#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <climits>
#include <stdlib.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
int h[10001];

struct node{
	int height;
	int val;
	struct node* left;
	struct node* right;
};

struct node* newNode(int height,int val){
	struct node* node=new(struct node);
	node->height=height;
	node->val=val;
	node->left=node->right=NULL;
	return node;
	
}

struct node* insert(struct node* node,pair<int,int>p){
	if(node==NULL)
	  return (newNode(p.first,1));
    if(p.second<node->val){
        node->left=insert(node->left,p);
        node->val++;
	}
    else{
		p.second-=node->val;
        node->right=insert(node->right,p);
       }
        return node;
        
}
bool compare(const pair<int,int>a,const pair<int,int>b){
	 return a.first>b.first;
 }
 void inorder(struct node* node){
	if(node==NULL)
	  return;
    inorder(node->left);
    cout<<node->height<<' ';
    inorder(node->right);
    
    
}
int main(){
	int t,n,a;
	vector<pair<int,int> >v;
	scanf("%d",&t);
	while(t--){
		v.clear();
		scanf("%d",&n);
		REP(i,n){
			scanf("%d",&h[i]);
		}
		REP(i,n){
		   scanf("%d",&a);
		   v.pb(mp(h[i],a));
	   }
	   sort(v.begin(),v.end(),compare);
	   node* head=NULL;
	   REP(i,n){
		   head=insert(head,v[i]);
	   }
	   inorder(head);
	   printf("\n");
   }
}
		   
