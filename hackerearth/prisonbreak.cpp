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
#include <stdio.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
typedef long long int ll;
int graph[25][25];
int visited[25][25];
int n;
	
int c=0;
void count(int i,int j){
		if(i==n-1&&j==n-1){
			c++;
			return;
		}
		visited[i][j]=1;
		
		if(i+1<n&&visited[i+1][j]==0&&graph[i+1][j]==0)
			count(i+1,j);
		if(i-1>=0&&visited[i-1][j]==0&&graph[i-1][j]==0)
			count(i-1,j);
		if(j+1<n&&visited[i][j+1]==0&&graph[i][j+1]==0)
			count(i,j+1);
		if(j-1>=0&&visited[i][j-1]==0&&graph[i][j-1]==0)
			count(i,j-1);
		visited[i][j]=0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	c=0;
	scanf("%d",&n);
	memset(visited,0,sizeof visited);
	REP(i,n){
			REP(j,n){
				scanf("%d",&graph[i][j]);
			}
	}
	count(0,0);
	printf("%d\n",c);
	}
}

	
		
