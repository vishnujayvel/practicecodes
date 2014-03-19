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
	int n,r,t,x,y,f;
	scanf("%d",&t);
	REP(i,t){
		f=0;
		scanf("%d %d",&n,&r);
		map<int,int>m;
		
		m.clear();
		REP(j,r){
			scanf("%d %d",&x,&y);
			m[x]=y;
		}
		REP(j,r)
		
			if(m.find(y)!=m.end()){
			  f=1;
			  break;
		  }
		printf("Scenario #%d: ",i+1);
		if(f)
          printf("spied\n");
	else
		
		 printf("spying\n");
		 
	 }
 }
		   
	
