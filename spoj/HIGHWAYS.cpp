
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
typedef long long int ll;
struct edge {
	int u;
	int c;
};
int dist[100005],n,s,d;
bool operator <(edge a,edge b){
	return a.c<b.c;
}
void dijikstra(vector<edge>graph[]){
			
			priority_queue<edge>q;
			REP(i,n+1)
				dist[i]=INT_MAX;
			dist[s]=0;
			q.push((edge){s,0});
			while(!q.empty()){
				edge p=q.top();
				q.pop();
				for(int i=0;i<(int)graph[p.u].size();i++){
					int u=p.u;
					int v=graph[p.u][i].u;
					if(dist[u]+graph[p.u][i].c<dist[v]){
						dist[v]=dist[u]+graph[p.u][i].c;
						//cout<<"\n dist["<<v<<"]="<<dist[v];
						q.push(graph[p.u][i]);
						//cout<<"push "<<graph[p.u][i].u<<" "<<graph[p.u][i].c<<"\n";
					}
				}
			}
			(dist[d]==INT_MAX)?printf("NONE\n"):printf("%d\n",dist[d]);
		}		
int main(){
  int t,m;
  scanf("%d",&t);
  while(t--){
	  	scanf("%d%d%d%d",&n,&m,&s,&d);
	
		vector<edge>graph[100005];
		REP(i,m){
			int u,v,c;
			scanf("%d%d%d",&u,&v,&c);
			graph[u].pb((edge){v,c});
			graph[v].pb((edge){u,c});
		}
		dijikstra(graph);
	}
}
