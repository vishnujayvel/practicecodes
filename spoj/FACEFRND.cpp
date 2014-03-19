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
int arr[105];
int main(){
   int n,num;
   set<int>s;
   scanf("%d",&n);
   REP(i,n){
	   scanf("%d",&arr[i]);
	   int m;
	   scanf("%d",&m);
	   REP(j,m){
		   scanf("%d",&num);
		   s.insert(num);
		   }
	   }
	REP(i,n){
		s.erase(arr[i]);
	}
	printf("%d\n",s.size());
}
