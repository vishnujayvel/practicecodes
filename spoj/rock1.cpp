#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<algorithm>
using namespace std;
int dpp[205];
int length(int dp[][205],int i,int n,int dpp[])
{
	if(i>=n)
		return 0;
	if(dpp[i]!=-1)	
		return dpp[i];
	int best=-1;
	for(int k=i;k<=n;k++)	
		if(dp[i][k] > 0)
			best=max(best,length(dp,k+1,n,dpp)+k-i+1);
	best=max(best,length(dp,i+1,n,dpp));
	dpp[i] = best;
	return dpp[i];
}
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		int n,dp[205][205];
		char s[205];
		scanf("%d %s",&n,s);
		for(int i=0;i<n;i++)
			dp[i][i]=(s[i] == '1') ? (1) : (0);
		for(int i=0;i<n;i++)
		{
			int sweet=0,sour=0;
			if(s[i] == '1')
				sweet++;
			else
				sour++;	
			for(int j=i+1;j<n;j++)
			{
				if(s[j] == '1')
					sweet++;
				else
					sour++;
				dp[i][j]=sweet-sour;
			}
		}
		memset(dpp,-1,sizeof(dpp));
		printf("%d\n",length(dp,0,n,dpp));
		
	}
}
