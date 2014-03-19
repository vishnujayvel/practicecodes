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
long long int dp[100005][3];
int main(){
	int n,t=1;
	while(1){
	scanf("%d",&n);
	if(n==0)
	   return 0;
	REP(i,n)
		REP(j,3)
			scanf("%lld",&dp[i][j]);
	dp[0][2]+=dp[0][1];
	dp[1][0]+=dp[0][1];
	dp[1][1]+=min(min(dp[0][1],dp[0][2]),dp[1][0]);
	dp[1][2]+=min(min(dp[1][1],dp[0][1]),dp[0][2]);
	FOR(i,2,n){
		dp[i][0]+=min(dp[i-1][0],dp[i-1][1]);
		dp[i][1]+=min(min(dp[i-1][0],dp[i-1][1]),min(dp[i-1][2],dp[i][0]));
		dp[i][2]+=min(min(dp[i][1],dp[i-1][1]),dp[i-1][2]);
	}
	printf("%d. %lld\n",t++,dp[n-1][1]);
	}
}

		
		
	
	
	
	 
	 
	 
	 
	 
	 
	 
		  

