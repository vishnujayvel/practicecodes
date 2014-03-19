#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
	int sum=0,c=0;
	 int k,need,n;
	 scanf("%d",&k);
	 for(int t=0;t<k;t++){
		 scanf("%d",&need);
		 scanf("%d",&n);
		 int *arr=new int[n];
		 for(int i=0;i<n;i++){
			 scanf("%d",&arr[i]);
			}
			sort(arr,arr+n);
		sum=0;
		c=0;
		for(int i=n-1;i>=0;i--){
			sum+=arr[i];
			//printf("%d %d\n",arr[i],sum);
			c++;
			if(sum>=need){
			     printf("Scenario #%d:\n%d\n",t+1,c);
			     break;
			 }
		 }
		 if(sum<need)
		  printf("Scenario #%d:\nimpossible\n",t+1);
	  }
  }
		 
