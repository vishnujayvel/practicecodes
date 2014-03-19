
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
long long int gcd(long long int n1,long long int n2)
{
  if(n1==0) return n2;
  else if(n2==0) return n1;
 
  if(n1>n2)
    return gcd(n1%n2,n2);
  else
    return gcd(n1,n2%n1);
 
return 0;
 
}
 
int main(){
	ll h,w;
	while(1){
		scanf("%lld%lld",&w,&h);
		//cout<<w<<" "<<h;
		if(w==0&&h==0)
		  return 0;
		  
		if(w>h){
			if(w%h==0){
				printf("%lld\n",w/h);
	            continue;		
			}
		}
		else{
			if(h%w==0){
				printf("%lld\n",h/w);
				continue;
			}
		}
				ll g=gcd(w,h);
				ll lcm=(w*h)/g;
		
				printf("%lld\n",lcm);
	}
}
		
