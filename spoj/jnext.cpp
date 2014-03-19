#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[1000000];
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(){
    int t,n,f;
	scanf("%d\n",&t);
	while(t--){
		f=0;
		scanf("%d\n",&n);
		int arr[n];
		for(int i=0;i<n;i++)
		   scanf("%d",&arr[i]);
		   int j=n-1;
		while(j>0){
			if(arr[j-1]<arr[j]){
			   
			    int k=n-1,min=arr[j],minpos=j;
			    for(;k>=j;k--){
					if(min>arr[k]&&arr[k]>arr[j-1]){
						
					   min=arr[k];
					   minpos=k;
				   }
			   }
			   int temp=arr[j-1];
			   arr[j-1]=arr[j];
			   arr[j]=temp;
               if(minpos!=j){
			   temp=arr[j-1];
			   arr[j-1]=arr[minpos];
			   arr[minpos]=temp;
               }
			   //swap(&arr[j-1],&arr[j]);
			   //swap(&arr[j-1],&arr[minpos]);
			   
			   qsort(arr+j,n-j,sizeof(int),compare);
			   f=1;
			   break;
		   }
		   j--;
	   }
	   if(f!=0){
	   for(int i=0;i<n;i++)
	     printf("%d",arr[i]);
	     printf("\n");
	 }
	 else
	   printf("-1\n");
	 }
 }
		   
			    
		
	
	
	
