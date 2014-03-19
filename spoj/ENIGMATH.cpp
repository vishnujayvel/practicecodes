#include<iostream>
using namespace std;
long long int gcd(long long int  a,long long int b){
	   if(b==0)
	     return a;
	    return gcd(b,b%a);
	  } 
long long int lcm(long long int a,long long int b){
	return a*b/gcd(a,b);
}

int main(){
	long long int a,b;
	int t;
	long long int l;
	cin>>t;
	while(t--){
		cin>>a>>b;
		l=lcm(a,b);
		cout<<l/a<<" "<<l/b<<endl;
	}
	//cout<<lcm(a,b);
}
	
