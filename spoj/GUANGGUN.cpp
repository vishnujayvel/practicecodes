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
#define MOD 1000007
ll solve(ll n){
	
		ll sum=0;
		while(n>0){
			sum+=(n%10);
			n=n/10;
		}
		return sum;
   
}		
	     
int main(){
	ll n;
	while(cin>>n){
		ll ans=0;
		for(int i=1;i<n;i++){
			cout<<solve(i);
			ans+=solve(i);
		}
		ans*=2;
		ans+=solve(n);
		printf("%lld\n",ans);
	}
}
