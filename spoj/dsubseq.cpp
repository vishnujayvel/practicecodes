#include<iostream>
#include<cstdio>
#include<string.h>
#define M 1000000007
using namespace std;
int main(){
    int t;
    
    	int last[128]={0};
        char string[100000];
        int dp[100000];
        int len,i;
        dp[0]=1;
    
	scanf("%d",&t);
	while(t--){
        memset(last,0,sizeof(last));
        scanf("%s",string+1);
         //len=strlen(string);
        dp[0]=1;
        for( i=1;string[i];i++){
			dp[i]=dp[i-1]*2;
			if(last[string[i]]>0){
				cout<<"fs"<<" "<<dp[last[string[i]]-1];
			    dp[i]=(dp[i]-dp[last[string[i]]-1]);
			}
			if(dp[i]<0) 
			   dp[i]+=M;
			 else if(dp[i]>=M)
			   dp[i]-=M;
			last[string[i]]=i;
		}
			
			printf("%d\n",dp[--i]);
		}
	}
