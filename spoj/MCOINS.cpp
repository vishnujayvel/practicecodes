
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
int dp[1000005];
int main(){
   int l,k,m,n;
   scanf("%d %d %d",&l,&k,&m);
   memset(dp,0,sizeof dp);
   dp[0]=0;
   dp[1]=1;
   FOR(i,2,1000000)
     if(i-1>=0&&dp[i-1]==0)//if last is a losing position and by removing 1 or l or k coins if you finish the game
     //then make dp[i]=1
        dp[i]=1;
     else if(i-l>=0&&dp[i-l]==0)
        dp[i]=1;
     else if(i-k>=0&&dp[i-k]==0)
        dp[i]=1;
   REP(i,m){
	    scanf("%d",&n);
	    if(dp[n])
	      printf("A");
	    else
	      printf("B");
	  }
}
