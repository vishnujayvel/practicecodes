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
bool isPossible(ll r,ll t,ll k){
	return ((2*k*k+(2*r-1)*k)<=t);
}
ll binarySearch(ll r,ll t){
	ll left=0,right=1;
	while(isPossible(r,t,right)){
		left=right;
		right=2*right;
	}
	while(right-left>1){
		ll mid=(right-left)/2+left;
		if(isPossible(r,t,mid)){
			left=mid;
		}
		else
			right=mid;
		}
	return left;
}
int main(){
   ll r,t;
   int tc;
   	scanf("%d",&tc);
   	REP(i,tc){
		scanf("%lld%lld",&r,&t);
		printf("Case #%d: %lld\n",i+1,binarySearch(r,t));
	}
}
