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
int sum(long long int n){
	int ans=0;
	while(n>0){
		ans+=n%(long long int)10;
		n=n/10;
	}
	return ans;
}
int main(){
     long long int n;
     int  t,s;
     scanf("%d",&t);
     while(t--){
		 scanf("%lld",&n);
     	 s=sum(n);
     	 while(n%s!=0){
			 n++;
			 s=sum(n);
		 }
		 printf("%lld\n",n);
	 }
 }
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 

