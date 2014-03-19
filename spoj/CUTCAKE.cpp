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
	long long int n1,n2,p;
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&p);
		p=(p<<1)-2;
		n1=(-1-sqrt(1+4*p))/2;
		n2=(-1+sqrt(1+4*p))/2;
		
			if(n1>=0&&n2>=0)
			   printf("%lld\n",min(n1,n2));
			else{
				if(n1>=0)
				  printf("%lld\n",n1);
				 else
				  printf("%lld\n",n2);
			  }
	  
		   
	}
}
	
