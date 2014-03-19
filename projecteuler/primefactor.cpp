
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	long long int n=1381992,largestpf=0,sqrtn,factor[2];
	sqrtn=sqrt(n);
	for(long long int i=2;i*i<n;i++){
		  if(n%i==0){
			  factor[0]=i;
			  factor[1]=n/i;
			  for(int j=0;j<2;j++){
				  bool isprime=true;
				  long long int sqrtj=sqrt(factor[j]);
				  for(long long int k=2;k*k<factor[j];k++){
					    if(factor[j]%k==0){
							isprime=false;
							break;
						}
					}
					if(isprime&&factor[j]>largestpf)
					   largestpf=factor[j];
				   }
			   }
		   }
		   cout<<largestpf;
	   }
					
					    
