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
long long int num(ll k,ll n){
	ll temp=pow(k,n+1);
	return (temp-1)/(k-1);
}

int main(){
	int t,k,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&k,&n);
		ll nodes=num(k,n);
		ll w=0;
		while(nodes!=0){
			w+=(nodes%10);
			nodes/=10;
		}
		
		printf("%lld\n",w);
	}
}
