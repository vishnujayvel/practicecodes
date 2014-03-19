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
 int r,c,x,y;
 int arr[30][30];
 int dp[30][30];
   int solve(){
	   int temp;
	   arr[x][y-1]=arr[x-1][y-1]-arr[x][y-1];
	   arr[x-1][y]=arr[x-1][y-1]-arr[x-1][y];
	   FOR(i,x-1,r)
	     FOR(j,y-1,c){
			if((i==x-1&&j==y-1)||(i==x-1&&j==y)||(i==x&&j==y-1))//borders 
			   continue;
			temp=max(arr[x][y-1],arr[x-1][y]);
			arr[x][y]=temp-arr[x][y];
		}
		return arr[r-1][c-1];
   }
   
   int main(){
        scanf("%d %d %d %d",&r,&c,&x,&y);
        REP(i,r)
          REP(j,c)
            scanf("%d",&arr[i][j]);
        //memset(dp,-1,sizeof dp);
        int ans=solve();
        if(ans>=0)
            printf("Y %d\n",ans);
         else
           printf("N \n");
	}
