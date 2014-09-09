#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <climits>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
typedef long long int ll;
int graph[101][101];
int visited[101][101];
int n,m;
int dp[101][101];
	
int c=0;
/*void count(int i,int j,int p){
		if(i==n-1&&j==n-1){
			if(p>c)
				c=p;
			return;
		}
		visited[i][j]=1;
		
		
		if(i+1<n&&visited[i+1][j]==0&&graph[i+1][j]>graph[i][j])
			count(i+1,j,p+1);
		if(j+1<m&&visited[i][j+1]==0&&graph[i][j+1]>graph[i][j])
			count(i,j+1,p+1);
		visited[i][j]=0;
		return;
}*/
int maxim=0;
int solve(int i,int j){
	
	if(dp[i][j]!=-1)
	 return dp[i][j];
	 
	int mi=-10000;
	//if(graph[i-1][j]>=graph[i][j]&&graph[i][j-1]>=graph[i][j])
	  // return dp[i][j]=-1000;
	if(i-1>=0){
		if(graph[i-1][j]<graph[i][j])
		mi=max(mi,solve(i-1,j)+1);
		else 
		solve(i-1,j);
	}
	if(j-1>=0)
	{
		if(graph[i][j-1]<graph[i][j])
		mi=max(mi,solve(i,j-1)+1);
	else
	 solve(i,j-1);
 }
		if(mi>maxim){
		//	cout<<"ffff"<<i<<" "<<j<<" "<<mi<<endl;
			maxim=mi;
		}
	return dp[i][j]=mi;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	maxim=0;
	scanf("%d%d",&n,&m);
	memset(visited,0,sizeof visited);
	REP(i,n){
			REP(j,m){
				scanf("%d",&graph[i][j]);
			}
	}
	memset(dp,-1,sizeof dp);
	dp[0][0]=0;
	solve(m-1,n-1);
	/*(REP(i,n){
		REP(j,m)
			cout<<dp[i][j]<<" ";
		cout<<endl;
	}*/
	cout<<maxim+1<<endl;
	
	}
}

	
		
		/*4 4
1 2 3 4
0 2 3 4
3 2 3 4
4 5 6 7

*/
