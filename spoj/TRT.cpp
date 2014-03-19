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
int treat[2005];
int dp[2005][2005];
int n;
int solve(int i,int j){
	  if(i<0||i>=n||j<0||j>=n)
	      return 0;
	  if(dp[i][j]!=-1)
	    return dp[i][j];
	   int a=j-i+1;
	   a=n-a+1;
	   if(i==j)
	     return (dp[i][j]=a*treat[i]);
	  dp[i][j]=max(a*treat[i]+solve(i+1,j),a*treat[j]+solve(i,j-1));
	  return dp[i][j];
  }
	   
int main(){
  
  scanf("%d",&n);
  REP(i,n)
    scanf("%d",&treat[i]);
    REP(i,n)
      REP(j,n)
        dp[i][j]=-1;
    //REP(i,n)
     //dp[i][0]=i,dp[0][i]=i;
    // dp[0][0]=0;
  printf("%d\n",solve(0,n-1));
  
}

