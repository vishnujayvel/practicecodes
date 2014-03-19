
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<climits>
#include<algorithm>
using namespace std;
int arr[10005];
int res[10005];
int main(){
  	int n,k,a,b,val,t,q;
  	scanf("%d",&t);
  	while(t--){
  	scanf("%d %d",&n,&k);
  	
  	memset(arr,0,sizeof(arr));
  	memset(res,0, sizeof(res));
  	for(int i=0;i<k;i++){
		scanf("%d %d %d",&a,&b,&val);
		
		arr[a]+=val;
		arr[b+1]-=val;
	}
	scanf("%d",&q);
	
	for(int i=0;i<q;i++){
		
		scanf("%d",&res[i]);
	}
	for(int i=1;i<n;i++)
	  arr[i]+=arr[i-1];
	for(int i=0;i<q;i++)
	printf("\n%d",arr[res[i]]);
}
}

