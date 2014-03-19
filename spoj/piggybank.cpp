#include<iostream>
#include<cstdio>
using namespace std;
int minValue[10000];
 
int min(int a,int b){
    if(a<b)
	   return a;
	else
	   return b;
   }
int main(){
	int t;
	int E,F,W,N;
	scanf("%d",&t);
	minValue[0]=0;
	while(t--){
		scanf("%d %d %d",&E,&F,&N);
        W=F-E;
        int w[N],P[N];
        for(int j=0;j<N;j++)
          scanf("%d %d",&P[j],&w[j]);
        for(int i=1;i<=W;i++){
			minValue[i]=9999999;
			for(int j=0;j<N;j++){
			if(w[j]<=i)
			   minValue[i]=min((minValue[i-w[j]]+P[j]),minValue[i]);
		   }
	   }
	    if(minValue[W]!=9999999)
	     printf("The minimum amount of money in the piggy-bank is %d.\n",minValue[W]);
	    else
	    printf("This is impossible\n");
	}
}
	      
