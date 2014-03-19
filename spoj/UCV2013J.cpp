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
int arr[1000005];
int main(){
    int n;
    while(1){
		scanf("%d",&n);
		REP(i,n)
		 scanf("%d",&arr[i]);
		if(n==0)
		   break;
		   int temp;
		 if(n%2!=0)
		   temp=(n+1)/2;
		 else
		   temp=n/2;
		 int pos=n-temp;
		 int sum=0;
		 while(pos<n){
			 sum+=arr[pos++];
		 }
		 printf("%d\n",sum);
	 }
}

