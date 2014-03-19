#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<list>
using namespace std;

struct edge{
	int from;
	int to;
};

int bfs(vector<list<struct edge> >graph,int n){
	queue<int> order;
	int* visited=new int[n+1];
	for(int i=0;i<=n;++i) visited[i] = 0;
	int numvisited=0;
	order.push(1);
	while(!order.empty()){
		int curr=order.front();
		order.pop();
		if(!visited[curr]){
			visited[curr]=1;
			numvisited++;
			/*search*/
			 for(list<struct edge>::iterator it=graph[curr].begin();it!=graph[curr].end();it++){
				 struct edge temp=*it;
				 if(!visited[temp.to]){
					 order.push(temp.to);
				 }
			 }
		}
	}
	return numvisited;
}
int main(){
	int n,e;
	scanf("%d %d",&n,&e);
	if(n-1>e){
	   printf("NO\n");
	   return 0;
    }
    vector<list<struct edge> >graph;
    for(int i=0;i<n;i++){
		list<struct edge> t;
     graph.push_back(t);
    }
    int t,f;
    
   for(int i=0;i<e;i++){
	   scanf("%d %d",&t,&f);
	   struct edge x;
	   x.from=t;
	   x.to=f;
	   graph[t].push_back(x);
	   x.from=f;
	   x.to=t;
	   graph[f].push_back(x);
   }
   int numvisited=bfs(graph,n);
	   if(numvisited==n&&e==n-1)
	   printf("YES\n");
	   else
	   printf("NO\n");
   }
	   
	
