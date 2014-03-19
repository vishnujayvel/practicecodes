
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
int arr[1000005];
int main(){
	int n,max1;
	scanf("%d",&n);
	REP(i,n){
		scanf("%d",&arr[i]);
		
	}
	int lis[n];
	for(int i=0;i<n;i++)
	    lis[i]=1;
   for(int i=1;i<n;i++){
	    max1=1;
   	for(int j=0;j<i;j++){
		if(arr[j]<arr[i])
		   max1=max(max1,1+lis[j]);
   	}
   }
   
          printf("%d\n",n-max1);
 }         
