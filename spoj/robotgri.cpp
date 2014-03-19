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
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
char map1[1001][1001];
int ways[1001][1001];
bool visited[1001][1001];

int n;
int dfs(int n){
	int xdirection[4]={0,-1,0,1};
	int ydirection[4]={-1,0,1,0};
	REP(i,n)
	 memset(visited[i],0,sizeof visited[i]);
	stack< pair<int,int> >s;
	s.push(mp(n-1,n-1));
	while(!s.empty()){
		pair<int,int> p=s.top();
		s.pop();
		//now check boundary conditions
		if(p.first<0||p.first>=n||p.second<0||p.second>=n||map1[p.first][p.second]=='#')
		 continue;
		if(!visited[p.first][p.second])
		  visited[p.first][p.second]=1;
		 else
		 continue;
	    if(p.first==0&&p.second==0)
	    return true;
	    REP(i,4)
	    s.push(mp(p.first+xdirection[i],p.second+ydirection[i]));
	}
	return false;
}
		
int dp(int n){
	long long int MOD=(2LL<<30LL)-1;
	for(int i=0;i<n;i++)
	  if(map1[0][i]!='#')
	  ways[0][i]=1;
	  else
	  break;
	 FOR(i,1,n){
		 FOR(j,0,n){
			 if(map1[i][j]=='.'&&ways[i-1][j]!=0)
			      ways[i][j]=((long long)ways[i][j]+(long long)ways[i-1][j])%MOD;
			 if(map1[i][j]=='.'&&j>0&&ways[i][j-1]!=0)
			      ways[i][j]=((long long)ways[i][j]+(long long)ways[i][j-1])%MOD;
			 }
		 }
		return ways[n-1][n-1];
	}
		 
int main(){
	scanf("%d",&n);
	REP(i,1001)
	  memset(ways[i],0,sizeof(ways[i]));
    REP(i,n)
     scanf("%s",map1[i]);
	int dynamic=dp(n);
	if(dynamic)
	   printf("%d\n",dynamic);
	else if(dfs(n))
	    printf("THE GAME IS A LIE\n");
    
    else 
      printf("INCONCEIVABLE\n");
    
	   
}
