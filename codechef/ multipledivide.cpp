#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t,i;
	long long int n,m,k,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld %lld",&n,&k,&m);
		/*while(m--)
		{
			if(n%k==0)
				n/=k;
			else
			{
				temp=n;
				n*=k;
				break;
			}
		}*/
		if(n%k==0){
		if(m%2==0) 
		printf("%lld\n",n);
		
		else printf("%lld\n",n/k);
	}else{
		if(m%2==0) 
		printf("%lld\n",n);
		
		else printf("%lld\n",n*k);
	}
}
	return 0;
}
