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
double points(char c){
	switch(c){
		case 'S':return 10;break;
		case 'A':return 9;break;
		case 'B':return 8;break;
		case 'c':return 7;break;
		case 'D':return 6;break;
		case 'E':return 5;
	}
	return 0;
}
int main(){
	int n;
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		double sum=0,sum1=0,c;
		char g;
		REP(i,n){
			scanf("%lf %c",&c,&g);
			sum+=(c*points(g));
			sum1+=c;
	    }
	    printf("%0.2lf",sum/sum1);
	}
}

