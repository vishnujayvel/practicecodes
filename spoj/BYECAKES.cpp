#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int x[4],x1[4];
int main(){
	int ans[4];
	int r,max=0,item=0,flag=0;
	 while(1){
	for(int i=0;i<3;i++)
	  scanf("%d",&x[i]);
	
	for(int i=0;i<=3;i++)
	  scanf("%d",&x1[i]);
	
	if(x[0]==-1)
			return 0;
	while(x[0]>0||x[1]>0||x[2]>0||x[3]>0){
		  for(int i=0;i<=3;i++)
		      x[i]-=x1[i];
		  }
		  for(int i=0;i<=3;i++)
		    printf("%d ",abs(x[i]));
		  printf("\n");
	}
}
	

		 	
