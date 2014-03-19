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
#define INF 100000
int main(){
	 int t;
	 scanf("%d",&t);
	 int g[55][55];
	 string str;
	 while(t--){
		 cin>>str;
		 int len=str.size();
		 REP(i,len){
		   g[0][i]=(str[i]=='Y')?1:INF;
	     }
		 FOR(i,1,len){
			 cin>>str;
			 REP(j,len)
			   g[i][j]=(str[j]=='Y')?1:INF;
		   }
		 /* REP(i,len){
		    REP(j,len)
		    cout<<g[i][j];
		    cout<<endl;
		}*/
		int count,index=0,max=0,i,k,j;
		 for(k=0;k<len;k++){
			 count=0;
		   for(i=0;i<len;i++){
			   if(k!=i&&g[k][i]==INF){
				   for(j=0;j<len;j++){
					   if(i!=j){
						   if(g[k][j]!=INF&&g[i][j]!=INF)//check if k and j are connected as well as j and i are connected provided k and i are not connected
						       break;
						   }
					   }
						 if(j<len)
						    count++;
						}
					}
				
				if(count>max)
				   max=count,index=k;
				   if(max>len){
				     cout<<k<<" "<<i<<" "<<j;
				     //break;
				     exit(0);
				 }
			}
		
			printf("%d %d\n",index,max);
	   }
   }
