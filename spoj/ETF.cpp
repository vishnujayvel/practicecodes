#include<iostream>
#include<cstdio>
using namespace std;

long long int fi(long long int n) 
     { 
       long long int result = n; 
       for(long long i=2;i*i <= n;i++) 
       { 
         if (n % i == 0) result -= result / i; 
         while (n % i == 0) n /= i; 
       } 
       if (n > 1) result -= result / n; 
       return result; 
     } 
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int n;
		scanf("%lld",&n);
		printf("%lld\n",fi(n));
	}
}
