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
	int t,n;
	int arr[100005];
	int ans[10]={-4,-3,-2,-4,-4,-3};
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		REP(i,n)
			scanf("%d",&arr[i]);
		REP(i,n)
			if(arr[i]<0)
			   printf("%d ",arr[i]);
			else if(arr[i]<=5)
			   printf("%d ",ans[arr[i]]);
		    else
		       printf("-4 ");
	   printf("\n");
	 }
	  }
  


