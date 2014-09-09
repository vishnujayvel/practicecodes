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
#define MOD 1000000007
typedef long long int ll;
int main(){
	int n,h;
	ll arr[100005];
	scanf("%d",&n);
	stack<ll>s;
	REP(i,n){
		
		scanf("%lld",&arr[i]);
	}
	ll product=1;
	s.push(arr[n-1]);

	for(int i=n-2;i>=0;i--){
		  s.empty();
		   while(!s.empty()){
			  
		    if(s.top()>arr[i]){
		      product=(product%MOD*s.top()%MOD)%MOD;
		      
	          s.push(arr[i]);
	          break;
		    }
		    else {
	          s.pop();
		    }
		 
	       }
	          if(s.empty())
		    s.push(arr[i]);
	   
	   
   }
	printf("%lld\n",product);
}
	
	 
	 
	 

		  


