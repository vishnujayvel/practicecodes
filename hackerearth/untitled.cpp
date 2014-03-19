
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
int arr[1000000];
int dp[10000][10000];
//vector<int>ans;
bool subset(int n,int s){
	if(dp[n][s]!=-1)
			return dp[n][s];
	if(s==0)
		return 1;
 	 else if(n==-1)
			return 0;

	if(arr[n]>s)
		dp[n][s]=subset(n-1,s);
	else
	   dp[n][s]=(subset(n-1,s)||subset(n-1,s-arr[n]));
	    //cout<<"sum is "<<s<<endl;
			
	   if(dp[n][s]==1){
			 cout<<"sum is "<<s<<endl;
			 //ans.pb(s);
		 }
		return dp[n][s];
 }
int main(){
      int t;
      scanf("%d",&t);
      while(t--){
		  //ans.clear();
	 	int n,s=0;
	 	memset(dp,-1,sizeof dp);
	 	scanf("%d",&n);
	 	REP(i,n){
	 	  scanf("%d",&arr[i]);
	 	  //s+=arr[i];
	  }
	  scanf("%d",&s);
	 	  	//ans.pb(0);
	     if(subset(n-1,s))
	         cout<<"YES\n";
	     else
	        cout<<"NO\n";
	        //subset(n-1,s);
	        //cout<<ans.size()<<endl;
     }

}
		  

