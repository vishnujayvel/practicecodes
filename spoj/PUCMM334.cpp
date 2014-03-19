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
   int m[10005],num;
 
	   memset(m,0,sizeof m);
	   	scanf("%d",&n);
	   	REP(i,n){
			scanf("%d",&num);
			m[num]++;
		}
		
	    if(m[n-1]==n){
				printf("%d\n",n);
				return 0;
			}
		int numcount=0;
		REP(i,n)
			if(m[i])
				numcount++;
		//REP(i,n)
			//cout<<m[i]<<endl;
		int j;
		for(j=n-1;j>=0;j--){
			if(m[j])
				break;
			}
		if(m[j-1]==j&&(m[j]+j)==n)
					printf("%d\n",j);
		else
					printf("-1\n");
		
	}
		
		
		 
		
			
	 
	 

		  

