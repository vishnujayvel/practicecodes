#include<iostream>
using namespace std;
int main(){
    int t;
	int n;
	int sum;
	cin>>t;
	while(t--){
		sum=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
		
		   cin>>arr[i];
		   sum+=arr[i];
	   }
	   bool dp[n+1][sum+1];
       
	   for(int i=0;i<=n;i++)
	       dp[i][0]=true;
       for(int i=1;i<=sum;i++)
           dp[0][i]=false; 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			//dp is always simple .check your chances.elimiate the last element if
			//it is greater than sum
			//if not -->have your chances again
			//a)try removing last element
			//b)dont remove last element
			 if(arr[i-1]>j)
			     dp[i][j]=dp[i-1][j];
             else
                  dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
		}
		    
	}
	for(int i=0;i<=n;i++){	
	   for(int j=0;j<=sum;j++)
	      cout<<dp[i][j]<<' '; 
	      cout<<endl;
	  }
	int maxsum=0;
	for(int i=0;i<=sum;i++)
	    if(dp[n][i]==true)
		    maxsum+=i;
			cout<<maxsum<<endl;
            
			    
       
}
}
