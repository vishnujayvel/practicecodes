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
	int n;
	int a[300005];
	int b[300005];
	scanf("%d",&n);
	REP(i,n){
	 scanf("%d",&a[i]);
	 b[i]=a[i];
 }
	 int j=n-1,swap=0;
	 sort(b,b+n);
	 for(int i=n-1;i>=0;i--){
		 if(a[i]==b[j]){
			 j--;
		 }
		 else
			swap++;
		}
		printf("%d\n",swap);
}
			
