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
struct h{
	int height;
	int greater;
};
bool cmp(struct h a,struct h b){
	return b.height>a.height;
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
	  int n;
	  cin>>n;
	  vector<struct h>v(n);
	  int ans[n];
	  memset(ans,0,sizeof ans);
   REP(i,n){
	   	 cin>>v[i].height;
	 }
	 REP(i,n){
		 cin>>v[i].greater;
	 }
	 sort(v.begin(),v.end(),cmp);
	REP(i,n){
		int cnt=v[i].greater;
		REP(j,n){
			if(cnt==0&&ans[j]==0){
			  ans[j]=v[i].height;
			  break;
		  }
			  
			  if(ans[j]==0)
			      cnt--;
		}
	}
	
	
		  REP(i,n)
		    cout<<ans[i]<<" ";
		   cout<<endl;   
}
}


