
#include<cstdio>
#include<stdlib.h>
#include<limits.h>
#include<iostream>
#include<cstdlib>
 
using namespace std;
#define ll long long int;

int dp[1005][1005];
int a[1005];

int solve(int i,int j){
	if(i>j)
	  return 0;
	int val1,val2;
	if(dp[i][j]!=-1)
	   return dp[i][j];
	 
	 if(a[i+1]>=a[j])
	   val1=a[i]+solve(i+2,j);
	 else
	   val1=a[i]+solve(i+1,j-1);
	if(a[i]>=a[j-1])
	  val2=a[j]+solve(i+1,j-1);
	 else
	   val2=a[j]+solve(i,j-2);
	  
	    return(dp[i][j]=max(val1,val2));
	}
int main(){
	int n,t=1;
	while(1){
		int sum=0;
		scanf("%d",&n);
		if(n==0)
		  break;
		for(int i=0;i<n;i++){
		   scanf("%d",&a[i]);
		   sum+=a[i];
	   }
		for(int i=0;i<=n;i++)
		   for(int j=0;j<=n;j++){
			   
		       dp[i][j]=-1;
		   }
		 for(int i=0;i<n;i++)
		   dp[i][i]=a[i];
		   int firstPlayer=solve(0,n-1);
		   int secondPlayer=sum-firstPlayer;
		   
		printf("In game %d, the greedy strategy might lose by as many as %d points.\n",t++,firstPlayer-secondPlayer);
	}
}
	
