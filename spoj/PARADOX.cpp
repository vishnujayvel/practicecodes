
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
	while(1){
		scanf("%d",&n);
		if(n==0)
			break;
		int dist[n+1][n+1];
		REP(i,n+1)
			REP(j,n+1)
			   dist[i][j]=999999;
		int s;
		char str[10];
	    FOR(i,1,n+1){
			scanf("%d %s",&s,str);
			if(str[0]=='f')
				dist[i][s]=1;
			else
				dist[i][s]=2;
		}
		FOR(k,1,n+1)
			FOR(i,1,n+1)
				FOR(j,1,n+1){
						if(dist[i][j]>dist[i][k]+dist[k][j])
							dist[i][j]=dist[i][k]+dist[k][j];
						}
		int f=1;
		FOR(i,1,n+1)
			if(dist[i][i]<999999&&dist[i][i]%2==1){
				printf("PARADOX\n");
				f=0;
				break;
			}
		if(f)
			printf("NOT PARADOX\n");
		}
					
			
		
	 
	 
	 
	 
	 
	 
	 
	 }
		  

