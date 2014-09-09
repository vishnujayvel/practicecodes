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
int n;
char arr[1005];
int dp[1005][1005][2];
int solve(int i,int track,int b){
	
	          
	 if(i==n-1){
		 if(track){
			 return 2;
		}
		else
		   return 0;
		
   }
	if(dp[i][b][track]!=-1)
	       return dp[i][b][track]; 
	
	int ret=100000; 
    if(track){
		 if(arr[i]!='#'){
		    ret=min(ret,solve(i,!track,b)+2);
		    
			//cout<<"switch solve("<<i+1<<","<<!track<<","<<b<<")+4"<<endl;
		}
		
			ret=min(ret,solve(i+1,track,b)+2);
		//cout<<"solve("<<i+1<<","<<track<<","<<b<<")+2"<<endl;
		
		
		
	 }
	else{
		if(arr[i+1]!='#'){
			ret=min(ret,solve(i+1,track,b)+1);
	      	//cout<<"solve("<<i+1<<","<<track<<","<<b<<")+1"<<endl;
		}
		     if(b){
				ret=min(ret,solve(i+1,track,b-1)+1);
				//cout<<"solve("<<i+1<<","<<track<<","<<b-1<<")+1"<<endl;
			}    ret=min(ret,solve(i+1,!track,b)+4);
	           // cout<<"solve("<<i+1<<","<<!track<<","<<b<<")+4"<<endl;  
		}
		
	
	
		return dp[i][b][track]=ret;
     
	 
 }
int main(){

 int t,b;
 scanf("%d",&t);
 while(t--){
	 memset(dp,-1,sizeof dp);
	 scanf("%d %d",&n,&b);
	 scanf("%s",arr);
	 //cout<<"start......................................\n";
	  cout<<solve(0,0,b)<<endl;
    
}
}

