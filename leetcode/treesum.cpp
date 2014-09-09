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
string tostr(int num){
	string str="";
	if(num==0)
	  str+=48;
	while(num>0){
		int temp=num%10;
		str+=(temp+48);
		num=num/10;
	}
	reverse(str.begin(),str.end());
	return str;
}
  //Definition for binary tree
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
 
     static int treesum;
class Solution {
public:
    void sum(TreeNode *root,int path){
             if(root==NULL)
               return ;
             path=path*10+root->val;
             if(root->left==NULL&&root->right==NULL){
				 treesum+=path;
			 }
			 sum(root->left,path);
			 sum(root->right,path);
		 }
                
            
    
    int sumNumbers(TreeNode *root) {
        if(root==NULL)
			return 0;
        
        string s=tostr(root->val);
       
        //cout<<"str "<<s<<" done";
        //cout<<"sum("<<root->val<<","<<s<<")";
        
        sum(root,0);
        return treesum;
    }
    
};
int main(){
  struct TreeNode *root = new TreeNode(10);
  root->left       = new TreeNode(8);
  root->right       = new TreeNode(2);
  root->left->left  = new TreeNode(3);
  root->left->right = new TreeNode(5);
  root->right->left = new TreeNode(2);
  Solution s;
  cout<<s.sumNumbers(root);
  

}
