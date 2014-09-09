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
int million=1000000;


double distance(double x,double y){
	 return sqrt(pow(x,2)+pow(y,2));
 }
 bool pairCompare(const pair<pair<int,int>,pair<int,double> >& firstElem, const pair<pair<int,int>,pair<int,double> > secondElem) {
  return firstElem.second.second < secondElem.second.second;
 }
int main(){
	int n,s;
	scanf("%d%d",&n,&s);
	vector<pair<pair<int,int>,pair<int,double> > >p;
	int x,y,pop;
	REP(i,n){
		cin>>x>>y>>pop;
		pair<int,int> temp;
		pair<int,double>te;
		pair<pair<int,int>,pair<int,int> >temp1;
		temp=mp(x,y);
		te=mp(pop,sqrt(pow(x,2)+pow(y,2)));
		temp1=mp(temp,te);
		p.pb(temp1);
	}
	sort(p.begin(),p.end(),pairCompare);
	int len=p.size();
	REP(i,len){
		s+=p[i].second.first;
		
		if(s>=million){
		pair<int,int> temp;
		pair<pair<int,int>,pair<int,double> >temp1=p[i];
			temp=temp1.first;
			int x=temp.first,y=temp.second;
			
		  printf("%.7lf",sqrt(pow(x,2)+pow(y,2)));
		  return 0;
		}
		
	}
		cout<<"-1";
	//main();
}

		  
		
