
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

int lcs(int X[],int Y[],int m,int n){
	int L[m+1][n+1];
   int i, j;
  
   /* Following steps build L[m+1][n+1] in bottom up fashion. Note 
      that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
  
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
  
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
    
   /* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
   return L[m][n];
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
		int max1=0;
		int x,m,n;
		
		int a[2005];
		int c[2005];
		scanf("%d",&x);
		int i=0;
		while(x!=0){
			a[i++]=x;
			scanf("%d",&x);
			
		}
		m=i;
		scanf("%d",&x);
		while(x!=0){
		i=0;
		while(x!=0){
			c[i++]=x;
			scanf("%d",&x);
			
		}
		n=i;
		max1=max(lcs(a,c,m,n),max1);
		scanf("%d",&x);
	}
	printf("%d\n",max1);
}
		
}
