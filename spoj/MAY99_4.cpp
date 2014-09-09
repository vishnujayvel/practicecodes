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
ll dp[105][105];

int Combination(int n,int r){
  ll ret;
  if(dp[n][r]!=-1)
       return dp[n][r];  
    if( n==r || r==0){
     ret = 1;
    }
    else{
  
     ret= (Combination( n-1, r)%10000007 + Combination( n-1, r-1)%10000007)%10000007;
     
   }
 return dp[n][r]=ret;
}
   int main(){
	   int n,r;//n muffins
	   cin>>n>>r;
	    memset(dp,-1,sizeof dp);
	   if(n==r)
	   cout<<"1";
	   else if(n>r){
	   cout<<Combination(n-1,n-r);
	  // main();
   }
	   else
	   cout<<"-1";
	   
   }	
