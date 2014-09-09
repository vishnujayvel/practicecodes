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
typedef long long int ll;
int main(){
	//vector<<pair<char*,char> > v;
	int n;
	scanf("%d",&n);
	//char start[50],end[50];
	string str,start,end,temp;
	map<string,int>m;
	REP(i,n){
		 cin>>str;
		 //scanf("%s-%s",start,end);
		 int len=str.size();
		 temp="";
		 
		 REP(j,len){
		    	if(str[j]!='-')
		    	  temp+=str[j];
		    	 else{
		    	  start=temp;
		    	  temp="";
			  }
		  }
		  end=temp; 
		// cout<<"start"<<start<<" "<<"end"<<end<<endl;
		 m[start]++;
		 m[end]--;
	 }
	 int c=0,max=0;
	 for(map<string,int>::iterator it=m.begin();it!=m.end();it++){
		 //cout<<it->first<<" "<<it->second<<endl;
		 c+=it->second;
		 if(c>max)
		   max=c;
	 }
	if(max>1)
		printf("Will need a moderator!\n");
	else
	    printf("Who needs a moderator?\n");
	    
 }
