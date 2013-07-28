#include<iostream>
#include<stack>
#include<stdlib.h>
#include<vector>
#include<string.h>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	int t;
	cin>>t;
	char arr[500];
	while(t--){
		memset(arr,0,sizeof(arr));
		gets(arr);
		stack<char> op;
		vector<char> exp;
		vector<char>::iterator it;
		for(int i=0;i<strlen(arr);i++){
			if(isalnum(arr[i]))
			     exp.push_back(arr[i]);
			else if(arr[i]==')'){
				exp.push_back(op.top());
			   op.pop();
		   }
		   else if(arr[i]=='('){
		   }
		   else
		   op.push(arr[i]);
	   }
	   for(it=exp.begin();it!=exp.end();it++)
	   cout<<*it;
	   cout<<endl;
   }
   return 0;
   
}
		        
		   
		

		
