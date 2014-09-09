
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
	int t,n,mn;
	scanf("%d",&t);
	FOR(tc,1,t+1){
		int c=0;
		scanf("%d%d",&n,&mn);
		map<string,int>m;
		string str;
		REP(i,n){
			cin>>str;
			int len=str.size();
			string temp="/";
			for(int i=1;i<len;i++){
				if(str[i]!='/')
				  temp+=str[i];
				 else{
					 m[temp]++;
					 temp+=str[i];
				 }
			 }
		  m[temp]++;
		
		 }
		// for(map<string,int>::iterator it=m.begin();it!=m.end();it++)
		//	cout<<it->first<<" "<<it->second<<endl;
		//}
		REP(i,mn){
			cin>>str;
			int len=str.size();
			string temp="/";
			for(int i=1;i<len;i++){
				if(str[i]!='/')
				  temp+=str[i];
				 else{
					 if(m.find(temp)!=m.end()){}
					 else{
						 c++;
						 m[temp]++;
					
					}
					 temp+=str[i];
			 }
		 }
		  if(m.find(temp)!=m.end()){}
					 else{
						 c++;
						 m[temp]++;
					
					}
		}

		printf("Case #%d: %d\n",tc,c);
		
		}
	}
	
	
