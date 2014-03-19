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
int a[5000];
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int allone=1,xorvalue;
		REP(i,n){
		scanf("%d",&a[i]);
		if(a[i]!=1)
		  allone=0;
		  
	  }
	  xorvalue=a[0];
	  FOR(i,1,n){
		  xorvalue^=a[i];
	  }
	  if(allone){
		  if(xorvalue)
		      printf("Brother\n");
		   else
		      printf("John\n");
		 
	 }
	 else{
		 if(xorvalue)
		    printf("John\n");
		 else
		    printf("Brother\n");
		}
	}
}
		  
		  
           		
