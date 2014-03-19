#include<iostream>
#include<cstdio>
#include<math.h>
#define MAX 1000000000L


using namespace std;

int a[32000]={0},prime[32000]={0};
int main(){
    typedef long long int LL;
	LL x=(LL)sqrt(MAX),t,i,j,n,m;
	int flag;
	scanf("%lld",&t);
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
	   prime[j++]=i;
   }
   
   while(t--){
	   scanf("%lld %lld",&m,&n);
	   if(m==1)
	       m++;
	       for(;m<=n;m++){
			   t=(long long int)sqrt(m);
			   flag=0;
			   for(i=0;prime[i]<=t&&i<j;i++){//j is the size of prime array
				   if(m%prime[i]==0){
				      flag=1;
				      break;
				  }
			  }
			  if(flag==0)
			   printf("%lld\n",m);
		   }
		   printf("\n");
	   }
   }
		   
			  
				      
			   
	   
	   
		     
	


