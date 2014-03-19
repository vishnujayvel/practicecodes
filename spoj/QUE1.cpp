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
int h[10001];
bool compare(const pair<int,int>a,const pair<int,int>b){
	 return a.first>b.first;
 }
int main(){
	int t,n,a;
	vector<pair<int,int> >v;
	scanf("%d",&t);
	while(t--){
		v.clear();
		scanf("%d",&n);
		REP(i,n){
			scanf("%d",&h[i]);
		}
		REP(i,n){
		   scanf("%d",&a);
		   v.pb(mp(h[i],a));
	   }
	   sort(v.begin(),v.end(),compare);
	   
	  REP(i,n)
	    printf("%d ",v[i].first);
	    printf("\n");
		   
	   FOR(i,1,n){
		   if(i>v[i].second){
			   pair<int,int> t;
			   t=v[i];
			   v[i]=v[i-1];
			   v[i-1]=t;
		   }
		   
	}
	  REP(i,n)
	    printf("%d ",v[i].first);
	    printf("\n");
}
}
