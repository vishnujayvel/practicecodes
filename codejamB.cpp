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
	double c,f,x;
	bool AreDoubleSame(double dFirstVal, double dSecondVal)
{
    return std::fabs(dFirstVal - dSecondVal) < 1E-3;
}
double solve(double spent,double each){
	 //cout<<x/each<<"<"<<(c/each+(x/(each+f)))<<endl;
	  if((x/each)<(c/each+(x/(each+f)))){
	      // cout<<"\nleft\n";
	       return (spent+x/each);
	   }
	       
	   else{
		//   cout<<"\nRight\n";
	      // cout<<"solve("<<spent<<","<<each<<")"<<endl;
	       return solve(spent+c/each,each+f);
	   }
} 
int main(){
	int t;
  	scanf("%d",&t);
    for(int ca=1;ca<=t;ca++){
		scanf("%lf%lf%lf",&c,&f,&x);
		printf("Case #%d: ",ca);
		
		printf("%.7lf\n",solve(0,2));
	}
}
