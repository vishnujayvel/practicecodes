#include<iostream>
using namespace std;
int max(int a,int b){
	if(a>b)
	   return a;
    else
        return b;
}
int main(){
	int b,n;
	while(cin>>b>>n){
		if(b==0&&n==0)
          break;
		int v[n];
		int c[n];
		int dp[n+1][b+1];
		for(int i=0;i<n;i++)
		   cin>>c[i]>>v[i];
       for(int i=0;i<=n;i++)
            dp[i][0]=0;
        for(int i=1;i<=b;i++)
            dp[0][i]=0;
         for(int i=1;i<=n;i++){
         	for(int j=1;j<=b;j++){
         		if(c[i-1]<=j){
         			dp[i][j]=max(dp[i-1][j],dp[i-1][j-c[i-1]]+v[i-1]);
         			
				 }
				 else
				    dp[i][j]=dp[i-1][j];
         	}
         
         }
         
         int moneyspent=b;//finding optimal cost
         while(dp[n][moneyspent-1]==dp[n][moneyspent]&&moneyspent>=1)
               moneyspent--;
         
         cout<<moneyspent<<' '<<dp[n][moneyspent]<<endl;
            
		
		
		
		
	}
}
