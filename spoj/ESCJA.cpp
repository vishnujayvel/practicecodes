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
typedef pair<int ,int> coor;
typedef pair<coor,int> state;
char m[105][105];
int n1,m1;
int steps[105][105][2];
bool ingrid(int x,int y){
	return (x>=0&&y>=0&&x<n1&&y<m1);
}

int bfs(int x1,int y1){
	REP(i,105)
	 REP(j,105)
	   steps[i][j][0]=-1,steps[i][j][1]=-1;
	 queue<state>q;
	 q.push(mp(mp(x1,y1),0));
	 steps[x1][y1][0]=0;
	 m[x1][y1]='.';
	 int xd[4]={0,-1,0,1};
	 int yd[4]={1,0,-1,0};
	 state st;
	 coor co;
	 int x,y;
	 while(!q.empty()){
		 st=q.front();
		 q.pop();
		 co=st.first;
		 REP(i,4){
				 x=co.first+xd[i];
				 y=co.second+yd[i];
				 
		 if(!ingrid(x,y))
		    return steps[co.first][co.second][st.second]+1;
		if(steps[x][y][st.second]==-1){
			 
				 if(m[x][y]=='.'){
				    q.push(mp(mp(x,y),st.second));
		            steps[x][y][st.second]=steps[co.first][co.second][st.second]+1;
				}
				else if(m[x][y]=='w'){
					continue;
				}
				else if(m[x][y]=='O'){
				 q.push(mp(mp(x,y),1));
		            steps[x][y][1]=steps[co.first][co.second][st.second]+1;
				}
				else if(m[x][y]=='C'){
					 q.push(mp(mp(x,y),0));
		            steps[x][y][0]=steps[co.first][co.second][st.second]+1;
				}
				else if(m[x][y]=='D'&&st.second==1){
					 q.push(mp(mp(x,y),st.second));
		            steps[x][y][st.second]=steps[co.first][co.second][st.second]+1;
				}
			}
		}
	}
	return -1;
}
	 
int main(){
	while(1){
	scanf("%d %d",&n1,&m1);
   if(n1==-1&&m1==-1)
     return 0;
  int x,y;
  for(int i=0;i<n1;i++){
	   scanf("%s",m[i]);
		for(int j=0;j<m1;j++){
		  
		 
		  if(m[i][j]=='H'){
			  x=i;
			  y=j;
		  }
	  }
  }
		  //cout<<x<<" "<<y<<" "<<m[x][y]<<"\n";  
   printf("%d\n",bfs(x,y));
}
}
	
	
