#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n;
long long int dp[100001];
long long int a[100005];
long long int solve(int curr){
	if(curr>=n)
	   return 0;
	   
	if(dp[curr]!=-1)
	  return dp[curr];
    if(n<=curr+3){
		long long int t=0;
		for(int i=curr;i<n;i++)
		  t+=a[i];
		  return (dp[curr]=t);
	  }
	  else{
		  long long val1,val2,val3;
		  val1=a[curr]+solve(curr+2);
		  val2=a[curr]+a[curr+1]+solve(curr+4);
		  val3=a[curr]+a[curr+1]+a[curr+2]+solve(curr+6);
		  return (dp[curr]=max(val1,max(val2,val3)));
	  }
  }
		  

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		memset(dp,-1,sizeof(dp));
		for(int i=0;i<n;i++)
		   
		scanf("%lld",&a[i]);
		printf("%lld\n",solve(0));
	}
}
	
