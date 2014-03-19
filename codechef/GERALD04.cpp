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
	int t;
	scanf("%d",&t);
	while(t--){
		int hr1,min1,hr2,min2,dist;
		float t1,t2;
		scanf("%d:%d",&hr1,&min1);
		scanf("%d:%d",&hr2,&min2);
		scanf("%d",&dist);
		t1=(hr1-hr2)*60+(min1-min2);
		if(t1>=dist*2)
		  t2=t1;
		else{
			t2=t1;
			t2+=(float)(2*dist-t1)/2;
		}
		t1+=dist;
		printf("%0.1f %0.1f\n",t1,t2);
	}
}
