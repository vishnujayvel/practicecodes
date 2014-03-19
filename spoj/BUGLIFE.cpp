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
int G[2005][2005];
int n;
bool bfs(int src){
	int colorArr[n];
	REP(i,n)
	   colorArr[i]=-1;
	   colorArr[src]=1;
	   queue<int> q;
	   q.push(src);
	   while(!q.empty()){
		   int u=q.front();
		   q.pop();
		   FOR(v,0,n){
			   if(G[u][v]==1&&colorArr[v]==-1){
				    colorArr[v]=1-colorArr[u];
				    q.push(v);
				  }
		      else if(G[u][v]==1&&colorArr[u]==colorArr[v])
				  return false;
		  }
	  }
	  return true;
  }   
int main(){
	int t;
	int k,a,b;
    scanf("%d",&t);
	FOR(i,0,t){
		scanf("%d %d",&n,&k);
		REP(i,n)
		  memset(G[i],0,sizeof G[i]);
		REP(j,k){
			scanf("%d %d",&a,&b);
		        G[a-1][b-1]=1,G[b-1][a-1]=1;  	
		 	/*REP(i,n){
			  REP(j,n)
			    cout<<G[i][j]<<" ";
			    cout<<"\n";
			}*/
		 	}    
			printf("Scenario #%d:\n",t+1);
			
       if(!bfs(0))
         printf("Suspicious bugs found!\n");
        else
          printf("No suspicious bugs found!\n");
	  }
  }
