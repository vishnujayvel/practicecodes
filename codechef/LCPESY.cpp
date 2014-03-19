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
	int t;
	char str1[10005],str2[10005];
	scanf("%d",&t);
	while(t--){
		map<char,int>m1,m2;
		int c=0;
		scanf("%s %s",str1,str2);
		int l1=strlen(str1),l2=strlen(str2);
		REP(i,l1)
		   m1[str1[i]]++;
		   REP(i,l2)
		   m2[str2[i]]++;
		for(map<char,int>::iterator it=m1.begin();it!=m1.end();it++){
		  // printf("%c %d\n",it->first,it->second);
		   if(it->second<=m2[it->first])
		      c+=it->second;
		   else if(it->second>m2[it->first])
		      c+=m2[it->first];
		  }
		 printf("%d\n",c);
	 }
 }
	
		
