#include<iostream>
#include<cstdio>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

	int dp[201];
	int n;
	char str[201];
int max1(int a,int b){
	if(a>b)
	  return a;
	 else
	  return b;
}
int find(int i){
   if(i==n)
     return 0;
   int max=dp[i];
    if(max!=-1)
      return max;
    else{
		max=0;
		int sweet=0,sour=0;
		for(int k=i;k<n;k++){
				   if(str[k]=='1')
				     sweet++;
				   if(str[k]=='0')
				     sour++;
				     if(sweet>sour)
				       max=max1(max,find(k+1)+sweet+sour);
				     else
				       max=max1(max,find(k+1));
		  }
		  
		  return max;
	  }
  }
  
int main(){
	
	int t;
	scanf("%d",&t);
	
	while(t--){
		scanf("%d %s",&n,str);
		memset(dp,-1,sizeof(dp));
		
		printf("%d\n",find(0));
	}
	}
