#include <iostream>
#include <cstdio>
using namespace std;

long long int gcd(long long int a, long long int b){

			long long int temp;

			temp = a % b;

			if (temp == 0)
			{
			return(b);
			}
			else
			{
			return(gcd(b, temp));
			}
}

int main(){
	int t;
	long long int n;
	scanf("%d",&t);
	while(t--){
		  scanf("%lld",&n);
		  for(long long int i=n/2;i>=1;i--){
                  if(gcd(n,i)==1){
                      printf("%lld\n",i);
                      break;
				  }
        }
    }
}
