
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
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	REP(i,n)
	 scanf("%d",&a[i]);
	 REP(i,n)
	 scanf("%d",&b[i]);
	sort(a,a+n);
	sort(b,b+n);
	int i=0,j=0,c=0;
	while(i<n&&j<n){
		if(a[i]<b[j]){
			 c++;
			 i++;
			 j++;
		 }
		 else
		    j++;
		}
   printf("%d",c);
}
	
