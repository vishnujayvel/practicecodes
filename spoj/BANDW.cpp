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
 string str,pat;
 while(1){
	   cin>>str>>pat;
	   if(str[0]=='*')
	     break;
	     int len=str.size();
	     int c=0;
	   REP(i,len){
		   if(str[i]!=pat[i]){
			   c++;
			   while(str[i]!=pat[i])
			      i++;
			  }
	}
		    
		   
	printf("%d\n",c);
}
}
