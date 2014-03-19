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
vector<int>arr;
vector<int>c;
int main(){
   int n,num;
   while(1){
	   arr.clear();
	   c.clear();
	   long long int sum=0;
	   scanf("%d",&n);
	   if(n==0)
	      return 0;
	   REP(i,n){
		   scanf("%d",&num);
		   arr.pb(num);
	   }
	   REP(i,n){
		    scanf("%d",&num);
		    c.pb(num);
		}
		sort(arr.begin(),arr.end());
		sort(c.rbegin(),c.rend());
		REP(i,n){
		 cout<<arr[i]<<" "<<c[i]<<"\n";
		sum+=((long long int)arr[i]*(long long int)c[i]);
	}
		printf("%lld\n",sum);
	}
}

