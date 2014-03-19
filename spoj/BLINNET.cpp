
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


struct edge {
	int v;
	int w;
};

bool operator <( edge a, edge b ) {
	return a.w > b.w;
}

void prim( vector< edge > graph[], int N ) {
	bool visited[ N + 1 ];
	int i;
	for ( i = 0; i <= N; ++i ) {
		visited[ i ] = false;
	}
	priority_queue< edge > q;
	queue< edge > mst;
	FOR(i,1,N+1) {
		if ( graph[ i ].size() > 0 ) {
			q.push( ( edge ) { i, 0 } );
			break;
		}
	}

	while ( !q.empty() ) {
		edge p = q.top();
		q.pop();

		if ( !visited[ p.v ] ) {
			visited[ p.v ] = true;
			mst.push( p );
			REP(i,graph[ p.v ].size() ) {
				edge k = graph[ p.v ][ i ];
				if ( !visited[ k.v ] ) {
					q.push( k );
				}
			}
		}
	}
	int sum = 0;
	while ( !mst.empty() ) {
		//printf("mst %d",mst.front().w);
		sum += mst.front().w;
		mst.pop();
	}

	printf( "%d\n", sum );
}

int main() {
	int N, t;
	scanf( "%d", &t );
	int v, w,nn;
	string name;
	while ( t-- ) {
		scanf( "%d",&N);
		vector< edge > graph[ N + 1 ];
		
		REP(j,N){
			cin>>name>>nn;
			REP(k,nn){
			scanf( "%d%d",&v, &w );
			//printf("inserting %d --- %d with cost %d\n",j+1,v,w);
			graph[ j+1].push_back( ( edge ) { v, w } );
			graph[ v ].push_back( ( edge ){ j+1, w } );
			}
		}
		prim( graph, N);
		
		
	}
	//scanf("%d",t);

	return 0;
}
