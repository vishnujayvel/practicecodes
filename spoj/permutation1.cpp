#include<iostream>
using namespace std;


int count(int n,int k){
	
	int dp[n][k];
	for(int i=0;i<n;i++)
	   for(int j=0;j<k;j++)
	   dp[i][j]=-1;
    
	if(n==0)
	     return 0;//no permutations-->so no count
    if(k==0)
         return 1;//no inversion -->so only 1 permutation possible.i.e in sorted order
    if(dp[n][k]!=-1)
        return dp[n][k];
    int c=0;
    for(int i=0;i<n&&(k-i)>=0;i++)
         c+=dp[n-1][k-i];
    dp[n][k]=c;
    return dp[n][k];
	     
}
int main(){
	
	int d,n,k;
	cin>>d;
	while(d--){
		cin>>n>>k;
		
	int dp[n+1][k+1];
	for(int i=0;i<=n;i++)
	   dp[i][0]=1;//no inversion -->so only 1 permutation possible.i.e in sorted order

     for(int j=0;j<=k;j++)
	   dp[0][j]=0;//no permutations-->so no count
    
    int c=0;
    for(int i=0;i<n;i++){
    	for(int j=0;j<k;j++){
    		int c=0;
    		int l=0;
    		while((j-l)>=0&&)
    	}
    }
    for(int i=0;i<n&&(k-i)>=0;i++)
         c+=dp[n-1][k-i];
    dp[n][k]=c;
		cout<<count(n,k)<<endl;
		
	}
	
	
}


