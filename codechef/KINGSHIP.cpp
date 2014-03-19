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
	ll arr[100005];
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		REP(i,n){
			scanf("%lld",&arr[i]);
		}
		sort(arr,arr+n);
		ll c=0;
		FOR(i,1,n){
			c+=arr[i];
		}
		printf("%lld\n",c*arr[0]);
	 }
		  
}
