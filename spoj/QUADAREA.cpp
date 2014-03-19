
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
int main(){
  double a,b,c,d;
  int t;
  scanf("%d",&t);
  while(t--){
	  scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	  float	s,ans;
	  s=(a+b+c+d)/2;
	  ans=sqrt((s-a)*(s-b)*(s-c)*(s-d));
	  printf("%.2lf\n",ans);
  }
}
	 
	 
	 
	 
