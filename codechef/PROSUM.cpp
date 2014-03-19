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
int arr[100005];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int c1=0,c2=0;
		REP(i,n){
			scanf("%d",&arr[i]);
			if(arr[i]==1)
				c1++;
			if(arr[i]==2)
				c2++;
			}
			n=n-c1;
			if(c2)
			if(n-c2!=0)
			n=n-c2+1;
			else
				n=n-c2;
			//cout<<"c2 is "<<c2;
			printf("%d\n",(n*(n-1))/2);
	 }
 }
		  

