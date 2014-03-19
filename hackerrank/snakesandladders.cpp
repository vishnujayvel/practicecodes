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
	//vector<vector<int> >G[105];
	unsigned int dist[105][105];
		 
	cin>>t;
	while(t--){
		int s,l;
		scanf("%d,%d",&l,&s);
		REP(i,101)
			REP(j,101)
				dist[i][j]=10000;
		FOR(i,1,100){
			//G[i].pb(i+1);
			dist[i][i+1]=1;
			if(i+6<=100)
			dist[i][i+6]=1;
			if(i+5<=100)
			dist[i][i+5]=1;
			if(i+4<=100)
			dist[i][i+4]=1;
			if(i+3<=100)
			dist[i][i+3]=1;
			if(i+2<=100)
			dist[i][i+2]=1;
			
			
		}
		int st,ed;
		REP(i,l){
			 scanf("%d,%d",&st,&ed);
			// G[st].pb(ed);
			dist[st][ed]=1;
		 }
		 REP(i,s){
			 scanf("%d,%d",&st,&ed);
			 //G[st].pb(-ed);
			 dist[st][ed]=-1;
		 }
		 
		for(int k=1;k<101;k++){
			for(int i=1;i<101;i++){
				for(int j=1;j<101;j++){
					if( dist[i][k]+dist[k][j]<dist[i][j])
						dist[i][j]=dist[i][k]+dist[k][j];
					}
				}
			}
	 
	 
	 
	 
	 cout<<dist[1][100]-1<<endl;
	 
	 }
 }
		  


