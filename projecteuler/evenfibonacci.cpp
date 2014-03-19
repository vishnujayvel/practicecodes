#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	 int a,b,c;
	a=1,b=2;
	long long int sum=2;
	while(c<4000000){
		c=a+b;
		a=b;
		b=c;
		if(c%2==0)
		  sum+=c;
	}
	cout<<sum;
}
		
	
