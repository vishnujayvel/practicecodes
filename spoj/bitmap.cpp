#include<iostream>
#include<queue>
#include<cstdio>
#include<string.h>
using namespace std;
int main(){
	
	int n,m,t;
	char str[200];
	int a[200][200],flag[200][200],ans[200][200];
	queue<int> queuex,queuey;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		memset(flag,0,sizeof(flag));
		memset(ans,0,sizeof(ans));
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++){
			 scanf("%s",str);
			for(int j=0;j<m;j++){
				
				if(str[j]=='1'){
					 a[i][j]=1;
					 flag[i][j]=1;
					 queuex.push(i);
					 queuey.push(j);
				 }
			 }
		 }
		 while(!queuex.empty()){
			 int x=queuex.front();
			 int y=queuey.front();
			 queuex.pop();
			 queuey.pop();
			 if(x>0&&flag[x-1][y]==0){
				 ans[x-1][y]=ans[x][y]+1;
				 flag[x-1][y]=1;
				 queuex.push(x-1);
				 queuey.push(y);
			 }
			 if(x<n-1&&flag[x+1][y]==0){
				 ans[x+1][y]=ans[x][y]+1;
				 flag[x+1][y]=1;
				 queuex.push(x+1);
				 queuey.push(y);
			 }
			 if(y>0&&flag[x][y-1]==0){
				 ans[x][y-1]=ans[x][y]+1;
				 flag[x][y-1]=1;
				 queuex.push(x);
				 queuey.push(y-1);
			 }
			 if(y<m-1&&flag[x][y+1]==0){
				 ans[x][y+1]=ans[x][y]+1;
				 flag[x][y+1]=1;
				 queuex.push(x);
				 queuey.push(y+1);
			 }
		 }
		 
		 for(int i=0;i<n;i++){
			 for(int j=0;j<m;j++){
				 printf("%d ",ans[i][j]-1);
			 }
			 printf("\n");
		 }
	 }
 }
			 
		 
					 
				
	
