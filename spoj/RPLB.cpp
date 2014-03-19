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
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
int n,W,wt[1001];
int dp[1001][1001];
int solve(int i,int w){
	if(i<=0)
	   return W-w;
	if (dp[i][w]!=-1)
	  return dp[i][w];
	  if(wt[i]<=w)
	dp[i][w]=max(solve(i-2,w-wt[i]),solve(i-1,w));
	else
	 dp[i][w]=solve(i-1,w);
	 return dp[i][w];
 }

int main(){
    int t;
    scanf("%d",&t);
    FOR(j,1,t+1){
		scanf("%d %d",&n,&W);
		FOR(i,1,n+1){
			scanf("%d",&wt[i]);
		}
		REP(i,1001)
		 memset(dp[i],-1,sizeof 1001);
		printf("Scenario #%d: %d\n",j,solve(n,W));
	}
}

