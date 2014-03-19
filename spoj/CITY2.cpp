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

	int n,x;
	map<int,int>m;
	int h[100005]; 
	bool isSameBuilding(int i){
		for(int j=i-1;j>0&&h[j]!=h[i];j--){
			 if(h[j]<=h[i])
			    return 0;
			}
			return 1;
		}
int main(){  
	int t = 1;
	while(cin>>n){
		memset(h,0,sizeof h);
	   m.clear();
	   int c=0;
	   REP(i,n){
		   scanf("%d",&h[i]);
		   if(h[i]==0||m[h[i]]&&isSameBuilding(i)){
			   
			 }
			 else{
			  m[h[i]]=1;
			  c++;
		    }
	  }
	  printf("Case %d: %d\n",t,c);
	  t++;
}
}
	
		  
