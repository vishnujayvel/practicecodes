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
	int t;
	scanf("%d",&t);
	while(t--){
		int n,num;
		scanf("%d",&n);
		int map[1005];
		memset(map,0,sizeof map);
		REP(i,n)
			scanf("%d",&num),map[num]++;
		int flag=1;
		for(int i=1;i<=n;i++){
			if(map[n-i]!=0) //take any location say i.it should either have n-i numbers or i-1 numbers before or after it
				map[n-i]--;
		    else if(map[i-1]!=0)
				map[i-1]--;
			else{
				flag=0;
				break;
			}
			}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
		}
	}

				
			
		
	
	 
