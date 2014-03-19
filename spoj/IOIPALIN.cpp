#include<cstdio>
#include<stdlib.h>
#include<limits.h>
#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long int;
string str,rev;
int n;

   int dp[6101][6101];
int lcs(){

   for(int i=0;i<=n;i++){
        dp[i][0]=0;
        dp[0][i]=0;
	}
   for(int i=1;i<=n;i++){
	   for(int j=1;j<=n;j++){
		   
		   if(str[i-1]==rev[j-1])
		   dp[i][j]=dp[i-1][j-1]+1;
		   else
		   dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	   }
   }
   return dp[n][n];
}

int main(){
	//int t;
	scanf("%d",&n);
	
		cin>>str;
		rev=str;
		reverse(rev.begin(),rev.end());
		//n=str.size();
		printf("%d\n",n-lcs());
	
}
	
