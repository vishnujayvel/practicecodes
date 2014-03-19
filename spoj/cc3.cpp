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
int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];
 
   // Build table K[][] in bottom up manner
   for (i = 0; i <= raw; i++)
   {
       for (w = 0; w <= time; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (raw-mreq[i-1] >=0&&time-mtime[i-1]>=0){
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],K[i-1][w]);
                 
                 
           else
                 K[i][w] = K[i-1][w];
       }
   }
 
   return K[n][W];
}
int main(){
}
