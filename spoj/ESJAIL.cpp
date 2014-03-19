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

int open[100005];
int considered[100005];
int key[100005];
vector<int>connect[100005];
int bfs(int n){
	 queue<int>q,p;
		 q.push(1);
		 considered[1]=1;
		 while(!q.empty()){
			 while(!q.empty()){
				 int t=q.front();
				 q.pop();
				 //cout<<endl<<t<<"adj\n";
				 int sz=connect[t].size();
				 REP(i,sz){
					 int c=connect[t][i];
					 //cout<<c<<" ";
					 //if(c==6)
					// cout<<"yippee"<<considered[c]<<" "<<open[c];
					 if(!considered[c]){
						 if(!open[c]){
							 considered[c]=1;
							 continue;
						 }
						 
						 if(c==n)
						   return true;
						 if(key[c]&&!open[key[c]]){
							 p.push(key[c]);
							 open[key[c]]=1;
						 }
						 considered[c]=1;
						 q.push(c);
					 }
				 }
			 }
			 while(!p.empty()){//chambers that were closed and considered and not explored and just now whose keys were found
			 //give a chance to explore it again since they might lead us to the destination
				 int y=p.front();
				 if(open[y]&&considered[y])
				 q.push(y);
				 p.pop();
			 }
		 }
	 return false;
 
	 }

int main(){
	int n,k,m,a,b;

	while(1){
		scanf("%d %d %d",&n,&k,&m);
		if(n==-1&&k==-1&&m==-1)
		  break;
		  FOR(i,0,n+1){
			  considered[i]=0;
			  open[i]=1;
			  key[i]=0;
			  connect[i].clear();
		  }
		 REP(i,k){
			 scanf("%d %d",&a,&b);
			
			 key[a]=b;
			 open[b]=0;
		 }
		 REP(i,m){
			 scanf("%d %d",&a,&b);
			 connect[a].pb(b);
			 connect[b].pb(a);
		 }
		
		 
		 
		  if(bfs(n))
		   printf("Y\n");
		   
		  else
		   printf("N\n");
	   }
   }
				
				
			   
			 
			 
