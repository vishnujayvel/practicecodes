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
long long int arr[10005];
long long int dp[10005];
int n;
//dp[i] --> maximum coin sum till i monsters
long long int solve(int i){
	if(i>=n)
	  return 0;
	if(i==n-1)//if it is the last monster ,you have to choose it coz our aim is to maximize the coin sum
	  return arr[i];
    if(dp[i]!=-1)
      return dp[i];
    dp[i]=max(arr[i]+solve(i+2),solve(i+1));//if you choose the ith monster's coins you cannot choose the next so you 
    //move to the i+2th monster. if you do not choose the ith monster's coins you still have a chance to choose i+1th monster's 
    //coins.So you move to i+1th monster 
    return dp[i];
}
int main(){	
  int t;
  scanf("%d",&t);
  FOR(j,1,t+1){
	  scanf("%d",&n);
	  REP(i,n)
	    scanf("%lld",&arr[i]);
	 memset(dp,-1,sizeof dp);
	 printf("Case %d: %lld\n",j,solve(0));
}
}
