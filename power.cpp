#include<iostream>
using namespace std;

long long int power(long long int a,long long int n){
	long long int halfpow;
	if(n==0)
	    return (long long int)1;
	    halfpow=power(a,n/2);
	 if(n%2==0){
		 
		  return halfpow*halfpow;
	  }
	  else{
		  return a*halfpow*halfpow;
	  }
  }
	
	  

int main(){
	cout<<power(10,10);
}
	
