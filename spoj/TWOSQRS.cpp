#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	int t;
	long long int n,x;
	scanf("%d",&t);
	while(t--){
		int f=0;
		scanf("%lld",&n);
		int i=(int)sqrt(n);
		int j=0;
		while(1){
			if(j*j>n)
			  break;
			if(i*i==n){
                 f=1;
                 break;
             }
             x=i*i+j*j;
             if(x==n){
				 f=1;
				 break;
			 }
			 else if(x<n)
			   j++;
			 else
			   i--;
		   }
		   if(f==1)
		   printf("\nYES");
		   else
		   printf("\nNO");
	   }
   }
