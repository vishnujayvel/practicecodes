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
long long int max(ll a,ll b){
	if(a>b)
	   return a;
	else 
	   return b;
}
int main(){
 ll arr[1000005];
 int t,n;
 scanf("%d",&t);
 for(int j=1;j<=t;j++){
	 scanf("%d",&n);
	 long long int sum=0;
	 ll initial=0;
	 REP(i,n){
		 scanf("%lld",&arr[i]);
	     sum+=arr[i];
	     if(sum<0){
			 initial+=abs(sum);
			 sum=0;
	     }
     }
     printf("Scenario #%d: %lld\n",j,initial+1);
   
}
return 0;
}
