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
#include <stdio.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back

int main(){
int n,s;
int d,c;
cin>>n>>s;
int min1=99999;
REP(i,n){
	cin>>d>>c;
	if(d<s&&c!=0)
	  min1=min(min1,c);
  }	
if(min1!=99999)
   cout<<100-min1<<endl;
else
   cout<<"-1"<<endl;
   


}
		  

