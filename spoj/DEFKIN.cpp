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
int main(){
   int t;
   char dummy;
   scanf("%d%c",&t,&dummy);
   int x[40000],y[40000];
   int w,h,n;
   while(t--){
   memset(x,0,sizeof x);
   memset(y,0,sizeof y);
   scanf("%d %d %d%c",&w,&h,&n,&dummy);
   for(int i=0;i<n;i++){
	   scanf("%d %d%c",&x[i],&y[i],&dummy);
	   
   }
   sort(x,x+n);
   sort(y,y+n);
   int maxX=(x[0]-1);
   int maxY=(y[0]-1);
   for(int i=1;i<n;i++){
      maxX=max(maxX,(x[i]-x[i-1]-1));
      maxY=max(maxY,(y[i]-y[i-1]-1));
   }
   maxX=max(maxX,(w-x[n-1]));
   maxY=max(maxY,(h-y[n-1]));
   printf("%d\n",maxX*maxY);
}
}
