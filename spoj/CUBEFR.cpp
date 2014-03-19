#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;


int main(){
	bool flag[1000001];
	int ans[1000001];
	int cube,x,t,n;
	memset(flag,0,sizeof(flag));
	for(int i=2;i<=1000;i++){
		if(!flag[i]){
		cube=i*i*i;
		
		for(x=cube;x<1000001;x+=cube)
		  flag[x]=true;
	  }
  }
	  int index=0;
	  for(int i=1;i<1000001;i++){
		   if(!flag[i]){
			   ans[i]=++index;
		   }
	   }
	   scanf("%d",&t);
	  for(int i=1;i<=t;i++){
		  scanf("%d",&n);
		  if(flag[n]==1){
			  printf("case %d: Not Cube Free\n",i);
			  
		  }
		  else
		  printf("case %d: %d\n",i,ans[n]);
	  }
  }
		  	  
    
