#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		 int n,f=1;
        scanf("%d",&n);
        long long int a[n];
        scanf("%lld",&a[0]);
        for(int i=1;i<n;i++){
        scanf("%lld",&a[i]);
        if(a[i]<a[i-1]){
			f=0;
            break;
		}
		else
        a[i]=a[i]-a[i-1];
	}
	if(f==1)
	   printf("YES\n");
	else
	  printf("NO\n");
  }
}
	
        
