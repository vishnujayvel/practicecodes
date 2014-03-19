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
 struct cord{
	int x;
	int y;
	int h;//sandman's height
};
char building[2][100001];
int H,K;
void visit(int x,int y,cord p,int visited [][100001],int dist[][100001],queue<cord> &q){
	if(x<0||x>=2||y<0||y>=H||visited[x][y]||building[x][y]=='X')
	    return;
	 dist[x][y]=dist[p.x][p.y]+1;
	 q.push((cord){x,y,p.h+1});
	 visited[x][y]=1;
 }
int bfs(){
	int dist[2][100001];
	int visited[2][100001];
	memset(visited[0],0,sizeof visited[0]);
	memset(visited[1],0,sizeof visited[0]);
	
	dist[0][0]=0;
	visited[0][0]=1;
	queue<cord>q;
	q.push((cord){0,0,0});
	while(!q.empty()){
		cord p=q.front();
				q.pop();
				if(p.h>p.y)
				     continue;
				if(p.y+K>=H)
				    return dist[p.x][p.y]+1;
				  visit(p.x,p.y+1,p,visited,dist,q);
				  visit(p.x,p.y-1,p,visited,dist,q);
				  visit(p.x-1,p.y+K,p,visited,dist,q);
				  visit(p.x+1,p.y+K,p,visited,dist,q);
			  }
	return -1;
}
				  
		
		
int main(){
  int t;
  scanf("%d",&t);
   while(t--){
	  scanf("%d %d",&H,&K);
	  scanf("%s %s",building[0],building[1]);
	  int ans=bfs();
	  if(ans<0)
	     printf("NO\n");
	  else
	    printf("%d\n",ans);
  }
}


