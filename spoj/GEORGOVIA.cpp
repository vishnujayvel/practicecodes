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
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
int main(){
	long long int n,arr[100005];
	while(1){
		
		 scanf("%lld",&n);
		 if(n==0)
		   return 0;
		  REP(i,n)
		    scanf("%lld",&arr[i]);
		    long long int work=0,t;
          FOR(i,1,n){//aim is to zero every element.Push the element right side
			   t=arr[i-1];//t stores the work required for push from i-1 to i
			  arr[i]+=arr[i-1];
			  if(t<0)
			     t=(t*-1);
			  work+=t;//add the work done to push for each unit distance(value of t)
		  }
		  printf("%lld\n",work);
	  }
			     
}
