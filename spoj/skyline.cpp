#include<iostream>
#include<cstdio>
using namespace std;

//generating catalan

long double cat[1001]={0};

  void generate(){
   cat[0]=1;
  cat[1]=1;
	for(int i=2;i<=1000;i++){
		cat[i]=((2*(2*i-1))/(long double)(i+1))*cat[i-1];
		cat[i]=(long double)((long long int)cat[i]%1000000);
	}
	
}
int main(){
	generate();
	int n;
	while(1){
		scanf("%d",&n);
		if(n==0)
		   break;
		 cout<<(long long int)cat[n]%1000000<<endl;
	}
	}
 
