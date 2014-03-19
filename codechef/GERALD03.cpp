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
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		int seq1[n];
		int seq2[n];
		REP(i,n)
		  scanf("%d %d",&seq1,&seq2);
		int c=0;
		string ans="";
		FOR(i,1,n){
			int x,y;
			x=a[i]-a[i-1];
			y=b[i]-b[i-1];
			while(x&&y){
			if(a[i-1]+x==y){
				if(y>0){
				  str+="R+";
				 b[i-1]++; y--;
			  }
			  else {
			   str+="R-";
			   b[i-1]--;y++;
		   }
	      }
	      else
			
