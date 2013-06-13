#include<iostream>
#include<cmath>
using namespace std;
static bool f=false;
void print(long long x,long long s){
	
	if(x>0){
		f=true;
		print(x/2,s);
		if(x%2LL==0)
		  cout<<'5';
		  else
		  cout<<'6';
	}
	else if(x==0&&!f){
		cout<<'5';
	}
}
void length(long long n){
	int c=2,i;
//	if(n==1||n==2)
	  // print(n,1);
	for(i=2;i<n&&c<n;i++){
		for(int j=i;j<pow(i,2)&&j<n;j++)
		    c++;
	}
	cout<<"length is"<<c;
}
int main(){
	long long n,x,num,len;
	
	cin>>n;
	num=n;
	length(n);
/*	if(n!=1){
	
	n--;
	n=(n>>1)|n;
	n=(n>>2)|n;
	n=(n>>4)|n;
	n=(n>>8)|n;
	n=(n>>16)|n;
	n++;
}
else
 n=2;
	//cout<<"next nearest power is "<<n;
	len=log2(n);
	x=n-num;
	x--;
	print(x);*/
	
}
