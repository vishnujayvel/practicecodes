
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
long long int n,l;
while(1){
	scanf("%lld %lld",&n,&l);
	if(n==0&&l==0)
	   return 0;
	long long int sum=n,last=n;
	FOR(i,2,l+1){
		last=(last*n)%1000000007;
		sum=(sum+(last))%1000000007;
	}
	printf("%lld\n",sum);
}
}
