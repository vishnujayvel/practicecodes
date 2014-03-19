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
char inv(char a){
	if(a=='{')
			return '}';
    else
             return '{';
  }
int lcs( string X,string Y, int m, int n )
{
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
   //int t;
   //scanf("%d",&t);
   int d=1;
   while(1){
	   string s;
	   cin>>s;
	   if(s[0]=='-')
			return 0;
	  /* int c=0;
	   int len=s.size();
	   if(s[0]=='}'){
		        c++;
		}
		if(s[len-1]=='{'){
			c++;
		}
		   int l=1,r=len-2;
		   while(l<r){
			   if(s[l]==inv(s[r])){
				    l++;
				    r--;
				    continue;
				}
				else{
				//   cout<<"l="<<l<<s[l]<<" "<<"r="<<r<<s[r];
				   c++;
				   l++;
				   r--;
			   }
		   }
	printf("%d. %d\n",d++,c);*/
	int len=s.size();
	string temp=s;
	reverse(temp.begin(),temp.end());
	   printf("%d. %d\n",len-lcs(s,temp,len,len));
}
}
	
		  
		  

