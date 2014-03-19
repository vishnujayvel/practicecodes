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

	
struct edge{
	int v;//vertex
	int w;//cost
};
bool operator <( edge a, edge b ) {
	return a.w > b.w;
}
void prims( vector< edge > graph[], int n, int p ){
	priority_queue< edge >q;
	vector<edge>mst;
	bool visited[n+1];
	memset(visited,0,sizeof visited);
	FOR(i,1,n+1){
		if(graph[i].size()>0){
		q.push((edge){i,0});
		break;
	}
	} 
	while(!q.empty()){
		edge p=q.top();
		q.top();
		if(!visited[p.v]){
			visited[p.v]=true;
			mst.pb(p);
			REP(i,graph[p.v].size()){
				edge k=graph[p.v][i];
				if(!visited[k.v])
					q.push(k);
				}
			}
		}
		int c=0;
		int len=mst.size();
	REP(i,len)
	    c+=mst[i].w;
	    c*=p;
	    printf("%d\n",c);
	    	
	   }
		
int main(){
	int t,p,n,m,u,v,w;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&p,&n,&m);
		
		vector<edge>graph[n+1];
		for(int i=0;i<m;i++){
			//cout<<"m is "<<m;
		   scanf("%d%d%d",&u,&v,&w);
			graph[u].pb(( edge ){v,w});
			graph[v].pb(( edge ){u,w});
		}
	prims(graph,n,p);
	}
}
	
