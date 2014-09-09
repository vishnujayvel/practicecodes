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
	scanf("%d",&t);
	int n;
	ll arr[100000],maxsumsofar[100000];
	ll count[100000];
	while(t--){
		scanf("%d",&n);
		
	    REP(i,n){
			 scanf("%lld",&arr[i]);
		 }
		 if (n==1){
		     printf("%lld 1\n",arr[0]);
		     continue;
		 }
			 
			 maxsumsofar[0]=arr[0];
			 ll sumtilli;
			 count[0]=1;
			 ll ans=0,mx=-9999999;
			 FOR(i,1,n){
				  sumtilli=maxsumsofar[i-1]+arr[i];
				  if(sumtilli==arr[i]){ //i.e maxsumsofar[i-1]=0
					   maxsumsofar[i]=sumtilli;
					   count[i]=count[i-1]+1; // i.e number of sequences whose sum = 0 appended with arr[i] gives count[i-1] and plus one is for arr[i] itself acting as a subsequence
				   }
				   else if(sumtilli<arr[i]){//current element arr[i] is greater than previous maximum sum.
					   maxsumsofar[i]=arr[i];
					   count[i]=1;// count[i]=1 because there is only one subsequence to get arr[i]
				   }
				   else {
					   maxsumsofar[i]=sumtilli;
					   count[i]=count[i-1]; //i.e. number of sequences whose sum=sumtilli is count[i-1] i.e already existing max sequences with sum = maxsumsofar[i-1] appended with arr[i] at the end
					}
					if(maxsumsofar[i]>mx)
						mx=maxsumsofar[i];
					}
			REP(i,n)
				if(maxsumsofar[i]==mx)
					ans+=count[i];
					
	 
	    printf("%lld %lld\n",mx,ans);
	 }
 }
		  


