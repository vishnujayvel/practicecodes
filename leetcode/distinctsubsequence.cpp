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

 int numDistinct(string S, string T) {
        int dp[T.size()+1][S.size()+1];
        memset(dp,0,sizeof dp);
        int lens=S.size();
        int lent=T.size();
        for(int i=0;i<lent;i++)
            dp[i][0]=0;
        for(int j=0;j<lens;j++)
            dp[0][j]=1;
        for(int i=1;i<lent+1;i++){
             for(int j=1;j<lens+1;j++){
               //  cout<<"nope";
                 dp[i][j]=dp[i][j-1];
                 if(T[i-1]==S[j-1])
                     dp[i][j]+=dp[i-1][j-1];
                 
             }
        }
        return dp[lent][lens];
    }
  int main(){
	  string s1,s2;
	  cin>>s1>>s2;
	  cout<<numDistinct("","");
  }
