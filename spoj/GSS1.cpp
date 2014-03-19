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
int arr[50005];

int maximumSuminContiguousSubarray(int l,int r){
  int max_so_far=0;
	int max_ending_here=0;
	for(int i=l;i<=r;i++){
		max_ending_here+=arr[i];
		if(max_ending_here<0)
		     max_ending_here=0;
         else if(max_so_far<max_ending_here)
             max_so_far=max_ending_here;         
 	}
 	return max_so_far;
}

int main(){
   int n;
   scanf("%d",&n);
   FOR(i,1,n+1)
     scanf("%d",&arr[i]);
   int l,r;
   int q;
   scanf("%d",&q);
   REP(i,q){
   scanf("%d %d",&l,&r);
   printf("%d\n",maximumSuminContiguousSubarray(l,r));
}
}

