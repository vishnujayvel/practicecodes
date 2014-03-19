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
char str[30];
int dp[30][300];//returns the number of possibilities (dp states->(position,previousSum))
int len;
int solve(int pos,int prevSum){
	if(pos==len)
	  return 1;
	  if(dp[pos][prevSum]!=-1)
	    return dp[pos][prevSum];
	    dp[pos][prevSum]=0;
	    int c=0;
		 int sum=0;
		 //this is the very important part of the solution.Here you are keeping on adding digits.if the sum(till ith digit)>=prevSum
		 //you call the subproblem solve(i+1,sum) .this process will be recursively going till the pos==length of input string
	 FOR(i,pos,len){

			 sum+=str[i]-'0';
			 if(sum>=prevSum)
			   c+=solve(i+1,sum);
	    
	}
	 return (dp[pos][prevSum]=c);
 }
			   
int main(){
	int t=1;
   while(1){
	   scanf("%s",str);
	   len=strlen(str);
	   if(!(str[0]>='0'&&str[0]<='9'))
	     break;
	   REP(i,30)
	     memset(dp[i],-1,sizeof dp[i]);
	     printf("%d. %d\n",t++,solve(0,0));
	     
}
}

