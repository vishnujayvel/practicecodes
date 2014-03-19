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
int arr[100005];
int main(){
  int t;
  scanf("%d",&t);
  int n,maxp;
  while(t--){
	  int maxn=0,minp=0,tempn=0,tempp=0;
	  int x=0;
	  scanf("%d %d",&n,&maxp);
	  REP(i,n){
		  scanf("%d",&arr[i]);
	  }
	  REP(i,n){
		  if(tempp+arr[i]<=maxp){
			  tempn+=1;
			  tempp+=arr[i];
		  }
		  else{
			  while(tempp+arr[i]>maxp){
				  tempp-=arr[x];
				  tempn-=1;
				  x++;
			  }
			  tempp+=arr[i];
			  tempn+=1;
		  }
		  if((tempn>maxn)||(tempn==maxn&&tempp<minp)){
			  //cout<<"\n"<<tempn<<" "<<tempp<<"\n";
			  maxn=tempn;
			  minp=tempp;
		  }
	  }
	  printf("%d %d\n",minp,maxn);
  }
		     
		  
}
