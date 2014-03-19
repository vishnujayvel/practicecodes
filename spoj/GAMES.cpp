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
   int t;
   scanf("%d",&t);
   while(t--){
	   double x,t;
	   scanf("%lf",&x);
	   t=x;
	   double i=1;
	   while(1){
		   t=t*i;
		   if(t-(int)t==0)
		        break;
		   i++;
			}
	  printf("%d\n",(int)i);
		   
   }
}

