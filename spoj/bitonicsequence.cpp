#include<iostream>
#include<cstdio>
using namespace std;


int bitonic(int arr[],int n){
	int *lis = new int[n];
   for ( int i = 0; i < n; i++ )
      lis[i] = 1;
      int *lds = new int [n];
   for ( int i = 0; i < n; i++ )
      lds[i] = 1;
	
	for(int i=1;i<n;i++){
		  for(int j=0;j<i;j++){
			  if(arr[i]>arr[j]&&lis[j]+1>lis[i])
			      lis[i]=lis[j]+1;
			  }
		  }
   for(int i=n-2;i>=0;i--){
	   for(int j=n-1;j>i;j--){
		   if(arr[i]>arr[j]&&lds[j]+1>lds[i])
		      lds[i]=lds[j]+1;
		  }
	  }
	  int max=lds[0]+lis[0]-1;
	  for(int i=1;i<n;i++)
	     if(max<lds[i]+lis[i]-1)
	       max=lds[i]+lis[i]-1;
	       return max;
	}
	
	int main(){
		int t,n;
		int arr[1000];
		scanf("%d",&t);
		while(t--){
			scanf("%d",&n);
			//int arr[n];
			for(int i=0;i<n;i++)
			  scanf("%d",&arr[i]);
			 printf("%d\n",bitonic(arr,n));
		 }
	 }
	  
