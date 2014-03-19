
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
typedef long long int ll;
int main(){
	int t;
	ll n;
	scanf("%d",&t);
	
	while(t--){
		vector< pair<ll,ll> > v;
		scanf("%lld",&n);
		REP(i,n){
			ll t;
			scanf("%lld",&t);
			v.pb(mp(t,i+1));
		}
			sort(v.begin(),v.end());
		//traverse from the right ( i.e consider the height candidate of the product from the maximum height
		ll max1=v[n-1].second;
		ll min1=v[n-1].second;
		ll ans=0;
		for(int i=n-2;i>=0;i--){
			max1=max(max1,v[i].second);
			min1=min(min1,v[i].second);
			ans=max(max(v[i].first*(max1-v[i].second),v[i].first*(v[i].second-min1)),ans);
			
		}
		printf("%lld\n",ans);
	}
}

