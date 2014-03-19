#include <iostream>
#include <cstdio>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main(){
	int t;
	int n1,n2;
	scanf("%d",&t);
	while(t--){
	    	scanf("%d",&n1);
	    	int a1[n1];
	    	for(int i=0;i<n1;i++)
	    	 scanf("%d",&a1[i]);
	    	scanf("%d",&n2);
	    	int a2[n2];
	    	for(int i=0;i<n2;i++)
	    	 scanf("%d",&a2[i]);
	    	 int min=9999999;
	    	for(int i=0;i<n1;i++){
				for(int j=0;j<n2;j++){
					if(min>abs(a1[i]-a2[j]))
					    min=abs(a1[i]-a2[j]);
					}
				}
				printf("%d\n",min);
				
				
			}
}
