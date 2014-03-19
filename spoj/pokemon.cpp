#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<map>
#include<vector>
#include<algorithm>
#include<climits>
#include<list>

using namespace std;
int min(int a[],int i,int n){
	int min=INT_MAX,index;
	for(int j=0;j<n;j++){
		if(j!=i){
			if(min>a[j]){
			    min=a[j];
			    index=j;
			}
		}
	}
	return index;
}

			    

int main(){
   int t,n;
   scanf("%d",&t);
   while(t--){
      scanf("%d",&n);
      int arr[n][3],i,j;
      for(i=0;i<n;i++){
		  for(j=0;j<3;j++)
         scanf("%d",&arr[i][j]);
	 }
	 int last=min(arr[0],9,3);
	 int cost=0;
	 int dp[n];
	 
	 cost+=arr[0][last];
	 
	 for(i=1;i<n;i++){
	    last=min(arr[i],last,3);
	    cost+=arr[i][last];
	}
	printf("%d\n",cost);
}
}	 
		 
		 	   
