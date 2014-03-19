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

struct coord{
	int mx,my,c1x,c1y,c2x,c2y;
}m,c1,c2;

int r,c;
int mx,my,c1x,c1y,c2x,c2y;
int dx[]={0,1,-1,0};
int dy[]={1,0,0,-1};

int ingrid(int x,int y){
	if(x>0&&x<=r&&y>0&&y<=c)
	  return 1;
	 return 0;
 }
	
	bool bfs(){
	queue<coord>q;
	
    int mousex,mousey,cat1x,cat1y,cat2x,cat2y;
	q.push((coord){mx,my,c1x,c1y,c2x,c2y});
	while(!q.empty()){
		coord p=q.front();
		q.pop();
		if(!ingrid(p.mx,p.my)){
		   return true;
	   }
		else{
			
			if(((p.mx!=p.c1x)||(p.my!=p.c1y))&&((p.mx!=p.c2x)||(p.my!=p.c2y))){
				REP(i,4){
					mousex=mx+dx[i];
					mousey=my+dy[i];
					REP(j,4){
						cat1x=c1x+dx[j];
						cat1y=c1y+dy[j];
						REP(k,4){
							cat2x=c2x+dx[k];
							cat2y=c2y+dy[k];
							q.push((coord){mousex,mousey,cat1x,cat1y,cat2x,cat2y});
						}
					}
				}
			}
		 }
	 }
 }
							
		    
	    
			
	
int main(){
     scanf("%d %d",&r,&c);
     int k;
     scanf("%d",&k);
     REP(i,k){
		 scanf("%d %d %d %d %d %d",&mx,&my,&c1x,&c1y,&c2x,&c2y);
		 if(bfs())
		   printf("YES\n");
		 else
		   printf("NO\n");
		 }
	 }

