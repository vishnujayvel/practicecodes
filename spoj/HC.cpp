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

int main(){
int t,n;
string str;
  scanf("%d",&t);
  while(t--){
	  scanf("%d",&n);
	  int a=0,b=0;
	  REP(i,n){
		  cin>>str;
		  
		  if(str=="lxh")
		     a++;
		   else
		     b++;
		 }
     if(n%2==0){
		 if(b%2==0)
		    printf("hhb\n");
		  else
		    printf("lxh\n");
		}
		else{
			if(b%2!=0)
			 printf("hhb\n");
			else
			 printf("lxh\n");
		 }
	 }
 }
		

