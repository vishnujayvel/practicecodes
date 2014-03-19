#include<iostream>
#include<cstdio>
#include<queue>
#include<climits>
using namespace std;
typedef struct edge{
	int u;
	int c;
}edge;
bool operator<(edge a,edge b){
	return a.c<b.c;
}

void dijikstra(vector<edge> graph[],int dist[],int n,int s){
	dist[s]=0;
	priority_queue<edge> q;
	q.push((edge){s,0});
	while(!q.empty()){
		edge p=q.top();
		q.pop();
		for(int i=0;i<(int)graph[p.u].size();i++){
			int u=p.u;
			int v=graph[p.u][i].u;
			if(dist[u]+graph[p.u][i].c<dist[v]){
				  dist[v]=dist[u]+graph[p.u][i].c;
				  q.push(graph[p.u][i]);
			  }
			  
		  }
	  }
  }

int main(){
	
	int e,n,u,v,c,s,d;
	int t;
	scanf("%d",&t);
	while(t--){
      scanf("%d %d",&n,&e);
      vector<edge> graph[n+1];
      int dist[n+1];
      for(int i=0;i<e;i++){
		  scanf("%d %d %d",&u,&v,&c);
		  graph[u].push_back((edge) {v,c});
	  }
	  for(int i=0;i<=n;i++){
		  dist[i]=INT_MAX;
      }
      scanf("%d %d",&s,&d);
      dijikstra(graph,dist,n,s);
      if(dist[d]!=INT_MAX)
         printf("\n%d",dist[d]);
         else
         printf("\nNO");
	 }
 }
      
      
      		
 
