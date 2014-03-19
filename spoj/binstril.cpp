#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d %d",&n,&k);
		if(((n-k)&((k-1)/2))==0)
		printf("\n1");
		else
		printf("\n0");
		
	}
}
	
	
