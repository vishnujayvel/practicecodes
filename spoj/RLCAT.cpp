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
int dp[300005];
int t,n,d;
	int arr[300005];
	
int solve(int i,int owner){
	if(dp[i]!=-1)
	   return dp[i];
	int ret;
	if(i>=n)
	   return 0;
	if(abs(arr[i]-arr[owner])<=d)
	   ret=min(solve(i+1,owner),solve(i+1,i)+1);
	 else
	   ret=solve(i+1,i)+1;
	 return (dp[i]=ret);
 }
int main(){
	scanf("%d",&t);
	while(t--){
		memset(dp,-1,sizeof dp);
		scanf("%d %d",&n,&d);
		REP(i,n)
			scanf("%d",&arr[i]);
			dp[0]=1;
		int c=solve(1,0);
		printf("%d\n",(c==0)?1:c);
	}
}
				
		
	 
	 
	 
		  

