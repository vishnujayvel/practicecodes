
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
int arr[300005];
int main(){
  int n;
  long long int maxp;
	  long long int costspent=0,tempp=0;
	  int x=0;
	  scanf("%d %lld",&n,&maxp);
	  REP(i,n){
		  scanf("%d",&arr[i]);
	  }
	  REP(i,n){
		  if((long long int)(tempp+arr[i])<=maxp){
			  //tempn+=1;
			  tempp+=arr[i];
		  }
		  else{
			  while((long long int)(tempp+arr[i])>maxp){
				  tempp-=arr[x];
				//  tempn-=1;
				  x++;
			  }
			  tempp+=arr[i];
			  //tempn+=1;
		  }
		  if((tempp>costspent)&&(tempp<=maxp)){
			  //cout<<"\n"<<tempn<<" "<<tempp<<"\n";
			  costspent=tempp;
		  }
	  
  }
		
	  printf("%lld\n",costspent);     
		  
}
