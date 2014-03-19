#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	int t,dp[1001]={0};
	scanf("%d",&t);
	for(int i=1;i<1001;i++){
		dp[i]=dp[i-1]+1;
		int f=2;
		while(i-f*f>=0){
			if(dp[i-f*f]+1<dp[i])
			dp[i]=dp[i-f*f]+1;
			f++;
		}
	}
	
	while(t--){
		int n;
		scanf("%d",&n);
		printf("\n%d",dp[n]);
	}
}
