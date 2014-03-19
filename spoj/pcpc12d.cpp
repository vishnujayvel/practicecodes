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

bool comp(pair<string,string> a,pair<string,string> b){
	int count1[26]={0},count2[26]={0};
	int len=a.first.size();
	REP(i,len){
		count1[a.first[i]-'a']++;
	}
	len=b.first.size();
	REP(i,len){
		count2[b.first[i]-'a']++;
	}
	REP(i,26){
		if(count1[i]!=count2[i])
		   return count1[i]>count2[i];
  }
  return false;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int tp=0;tp<t;tp++){
		pair<string,string> list[1005];
		char str[500];
		string s;
		int n;
		scanf("%d",&n);
		REP(i,n){
			//gets(str);
			cin>>str;
			s=string(str);
			//cout<<"scanned string is "<<s;
			list[i]=mp(s,s);
		}
		
		REP(i,n){
			sort(list[i].first.begin(),list[i].first.end());
			int j=0;
			while(list[i].first[j]==' ') j++;
			list[i].first=list[i].first.substr(j);
			
			for(int k=0;list[i].first[k];i++)
			   list[i].first[k]=tolower(list[i].first[k]);
			
		}
		sort(list,list+n,comp);
		printf("\ncase: %d",tp+1);
		REP(i,n)
		 cout<<endl<<list[i].second;
	}
}
