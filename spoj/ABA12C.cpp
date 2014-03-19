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
int n,k;
int val[100];
int dp[1010][100];
int solve(int w,int p){  //w-targetWeight p-packets
	    if(w==0&&p>=0)//if target weight is achieved
	       return 0;
	    if(w==0||p<=0)
	      return INT_MAX/2;
	   if(dp[w][p]!=-1)
	     return dp[w][p];
	    dp[w][p]=INT_MAX/2;
	    int ret=INT_MAX/2;
	    REP(i,k){
			if(w-i-1>=0&&val[i]!=-1)
			ret=min(ret,val[i]+solve(w-i-1,p-1));
		}
		return(dp[w][p]=ret);
	     
	   } 
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
	  scanf("%d %d",&n,&k);
	  REP(i,k)
	    scanf("%d",&val[i]);
	    memset(dp,-1,sizeof dp);
	    int ans=solve(k,n);
	    printf("%d\n",(ans==INT_MAX/2||ans<0)?-1:ans);
}
}
