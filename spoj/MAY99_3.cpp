#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

int gcd(int a,int b){
	if(b>a)
	  return gcd(b,a);
	if(b==0)
	  return a;
   
      return gcd(b,a%b);
  }

int main(){
	int x,y,z,t;
	scanf("%d",&t);
	
	while(t--){
		scanf("%d %d %d",&x,&y,&z);
		if(z>x&&z>y){
		  printf("NO\n");
		  continue;
	  }
	   
		int g=gcd(x,y);
		if(z%g==0)
		  printf("YES\n");
		else
		 printf("NO\n");
	 }
}
