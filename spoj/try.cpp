#include<iostream>
#include<cstdio>
#include<math.h>
#define MAX 1000000000L
using namespace std;

int a[32000]={0},prime[32000]={0};
int main(){
	typedef long long int LL;
	LL x=(LL)sqrt(MAX),t,i,j;
	int n;
	

	//sieve of erathroseus
	for(LL i=2;i<=x;i++){
		if(a[i]==0){
			for(j=2*i;j<=x;j+=i)
			      a[j]=1;
			  }
   }
   j=0;
   //create prime array that stores all prime numbers till sqrt(10^9)
   for(LL i=2;i<=x;i++){
	   if(a[i]==0)
	   prime[j++]=a[i];
   }
   scanf("%d",&n);
   while(n!=0){
   	    printf("%d\n",prime[n-1]);
   	    scanf("%d",&n);
   }
   }
