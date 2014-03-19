#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int gcd(int x,int y){
	if(x>y){
		return gcd(y,x);
	}
	else{
		if(y%x==0)
		   return x;
		else
		return gcd(y%x,x);
	}
}

int main(){
    int N , n1, n2,diff[100000],gcd1,ans=0;
    scanf("%d",&N);
    scanf("%d",&n1);
    for(int i=0;i<N-1;i++){
		scanf("%d",&n2);
		diff[i]=n2-n1;
		n1=n2;
		
	}
	gcd1=diff[0];
	for(int i=1;i<N-1;i++){
		gcd1=gcd(gcd1,diff[i]);
	}
	for(int i=0;i<N-1;i++){
		ans+=(diff[i]/gcd1-1);
	}
	printf("\n%d",ans);
	
	
}
