#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int arr[1000000];
int main(){
    int t,n;
	scanf("%d\n",&t);
	while(t--){
		
		scanf("%d\n",&n);
		int arr[n],brr[n];
		for(int i=0;i<n;i++){
		   scanf("%d",&arr[i]);
          
		}
		 if(next_permutation(arr,arr+n)){
		 
	   for(int i=0;i<n;i++)
	     printf("%d",arr[i]);
	     printf("\n");
	     }
        else
       printf("-1\n");
	    }
 
			    
		
	
}	
	

