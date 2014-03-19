#include<iostream>
#include<map>
#include<cstdio>
using namespace std;
int main(){
    int t;
    long long int n;
    scanf("%d",&t);
	map<long long int,long long int>count;
	map<long long int,long long int>::iterator it;
	long long int ans;
	while(t--){
		ans=0;
		scanf("%lld",&n);
		long long int arr[n];
		scanf("%lld",&arr[0]);
		count[arr[0]]++;
		
		for(long long int i=1;i<n;i++){
		scanf("%lld",&arr[i]);
		arr[i]=arr[i-1]+arr[i];
		count[arr[i]]++;

	   }
	   for(it=count.begin();it!=count.end();it++){
		   
			   
			  long long int c=it->second;
			   if(it->first==0)
			     ans+=c+c*(c-1)/2;
			   else
			     ans+=c*(c-1)/2;
			 
		 }
		 printf("%lld\n",ans);
		 
		count.clear();
		
	 }
 }
		
		
		
		
