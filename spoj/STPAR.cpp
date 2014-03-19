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
	int n;
	int m;
	while(1){
		scanf("%d",&n);
		int f=1;
		stack<int>s;
		int required=1;
		if(n==0)
		 return 0;
		REP(i,n){
			scanf("%d",&m);
			if(m==required)
                 required++;
            else{
				while(!s.empty()&&s.top()==required){
					required++;
					s.pop();
				}
				if(s.empty()||s.top()>m)
				   s.push(m);
				else
				   f=0;
			   }
			}
			if(f)
			   printf("yes\n");
			else
			   printf("no\n");
		   } 			
}
