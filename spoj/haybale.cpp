
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
  	int n,k,a,b;
  	scanf("%d %d",&n,&k);
  	int arr[n+1];
  	memset(arr,0,sizeof(arr+1));
  	for(int i=0;i<k;i++){
		scanf("%d %d",&a,&b);
		
		arr[a]+=1;
		arr[b+1]-=1;
	}
	for(int i=2;i<n+1;i++)
	  arr[i]+=arr[i-1];
	  sort(arr+1,arr+n);
	  printf("%d\n",arr[n/2+1]);
}
