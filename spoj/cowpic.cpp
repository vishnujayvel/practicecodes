#include<iostream>
#include<cstdio>
using namespace std;
int arr[100000];
void swap(int *a,int *b){
    int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	
	int n;
	
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		  scanf("%d",&arr[i]);
		long long int cnt=0;
		for(int i=0;i<n-1;i++){
			
		    //printf("\n i=%d toBeFound=%d found=%d\n",i,toBeFound,found);
		    if((arr[i]+1)%n==arr[i+1])
		       continue;
		     for(int j=i+1;j<n;j++){
				 if(arr[j]==(arr[i]+1)%n){
                     for(int k=j;k>i+1;k--){
				     swap(&arr[k],&arr[k-1]);
				     cnt++;
                     }
				     
				 }
			 }
		 }
		 
		 printf("%lld\n",cnt);
	 }
		        
