
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
vector< vector<int> >adj(10005);
int n,maximumdist,leaf;
int visited[10005];
void dfs(int u,int d){
	visited[u]=1;
	if(d>maximumdist)
	 maximumdist=d,leaf=u;
	REP(i,adj[u].size())
	  if(!visited[adj[u][i]])
	     dfs(adj[u][i],d+1);
	 }
int main(){
	int a,b;
	scanf("%d",&n);
	REP(i,n-1){
		scanf("%d %d",&a,&b);
		adj[a].pb(b);
		adj[b].pb(a);
	}
	memset(visited,0,sizeof visited);
	maximumdist=0;
	dfs(1,0);
	maximumdist=0;
    memset(visited,0,sizeof visited);
    dfs(leaf,0);
    printf("%d",maximumdist);		
}
