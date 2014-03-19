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
map<string,int> node;
int main(){
	int n,m;
	double k;
	string s,s1;
	int case1=1;
	while(1){
		
		node.clear();
		scanf("%d",&n);
		if(n==0)
		   return 0;
		 REP(i,n){
			 cin>>s;
			 node[s]=i;
		 }
		 double v[35][35];
		 REP(i,n){
			 REP(j,n){
				 v[i][j]=0.0;
			 }
		 }
		 scanf("%d",&m);
		 REP(i,m){
			  cin>>s>>k>>s1;
			  int a=node.find(s)->second;
			  int b=node.find(s1)->second;
			  v[a][b]=k;
		  }
		  REP(t,n)
			REP(i,n)
			  REP(j,n)
			    if(v[i][j]<v[i][t]*v[t][j])
			       v[i][j]=v[i][t]*v[t][j];
		 
		  int i=0;
		  for(i=0;i<n;i++)
		    if(v[i][i]>1.0)
		      break;
		      cout << "Case " << case1<< ": ";
		 if(i== n)
		        printf("No\n");
		        
		  else
		       printf("Yes\n");
		   
		   case1++;
	   }
		       
			 
}
