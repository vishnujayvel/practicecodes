#include<iostream>
#include<cstdio>
#include<stdio.h>
#include<string.h>
using namespace std;
int min(int a,int b){
	if(a>b)
	   return b;
	  else
	   return a;
   }
int main(){
	int t;
	scanf("%d",&t);
	int o,n,c;
	int ox[1000],nit[1000],wt[1000];
	while(t--){
		scanf("%d %d %d",&o,&n,&c);
		int dp[1000][1000];
		memset(dp,9999999,sizeof(dp));
		dp[0][0]=0;
		for(int i=0;i<c;i++){
			 scanf("%d %d %d",&ox[i],&nit[i],&wt[i]);
		 }
		 for(int k=0;k<c;k++){
			 for(int i=21;i>=0;i--){
				 for(int j=79;j>=0;j--){
					 if(ox[k]<=i&&nit[k]<=j)
					 dp[i][j]=min(dp[i][j],dp[i-ox[k]][j-nit[k]]+wt[k]);
					 else if(ox[k]>i&&nit[k]<=j)
					 dp[i][j]=min(dp[i][j],dp[i][j-nit[k]]+wt[k]);
					 else if(ox[k]<=i&&nit[k]>j)
					 dp[i][j]=min(dp[i][j],dp[i-ox[k]][j]+wt[k]);
					 else
					 dp[i][j]=min(dp[i][j],wt[k]);
				 }
			 }
		 }
		 printf("%d\n",dp[o][n]);
	 }
 }
		 
			
		

