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
#define FOR(i,st,end) for(long long int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
int n;
long long int mod=1000000003;
long long int dp[1000005];
void solve(){
	dp[0]=0;
	/*FOR(i,1,1000001){
		long long int prod=((long long int)(i*i))%mod;
		prod=(prod*i)%mod;
		dp[i]=(dp[i-1]%mod+prod)%mod;
	//	cout<<i<<" "<<dp[i]<<endl;
	
	}*/
	dp[1]=1;
	long long int k,i;
        for(i=2;i<=1000000;i++)
        {
           k=((i*(i+1))/2)%mod;
           dp[i]=((dp[i-1])%mod+(k*k)%mod)%mod;
        }
}

int main(){
	int t;
	scanf("%d",&t);
	solve();	
	while(t--){
		scanf("%d",&n);
		
		printf("%lld\n",dp[n]);
	}
}
