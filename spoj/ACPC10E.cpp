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
long long int d;



int main(){
    long long int G,T,A,D;
    while(1){
		 scanf("%lld %lld %lld %lld",&G,&T,&A,&D);
		 if(G==-1)
		    break;
		 long long int c=0;
		 c=((T*(T-1))/2)*G;
		 long long two=1,t=(G*A)+D;
		while(two<t){
		 c+=two;
		 two*=2;
		// cout<<" "<<c<<"\n";
		}
	 d=two-t;
		 printf("%lld*%lld/%lld+%lld=%lld+%lld\n",G,A,T,D,c,d);
		 
}
}

