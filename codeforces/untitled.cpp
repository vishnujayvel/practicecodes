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
	int n,s;
	int dollar[1000];
	int cent[1000];
	scanf("%d%d",&n,&s);
	int min1=99999;
	
	REP(i,n){
		scanf("%d%d",&dollar[i],&cent[i]);
		if(dollar[i]<s&&cent[i]!=0){
			 min1=min(min1,cent[i]);
			 
	    }
	}
	if(min1!=99999)
	   printf("%d\n",100-cent[i]);
	else
	  printf("-1\n");
	
	
}
		
