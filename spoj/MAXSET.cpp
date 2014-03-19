#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int max(int a,int b){
	if(a>b)
	  return a;
	 else
	  return b;
  }
int lis1(int arr[],int n){
	int lis[100000],max=0;
	for(int i=0;i<n;i++)
	   lis[i]=1;
	   for(int i=1;i<n;i++){
		    for(int j=0;j<i;j++){
				if(arr[i]>arr[j]&&lis[i]<lis[j]+1)
				   lis[i]=lis[j]+1;
			   }
		   }
		   for(int i=0;i<n;i++)
		      if(lis[i]>max)
		         max=lis[i];
		    return max;
		}
int main(){
	int t,n;
	
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
        int arr1[n];
        for(int i=0;i<n;i++){
			scanf("%d",&arr1[i]);
			
		}

		printf("%d\n",lis1(arr1,n));
	}
}
          		
