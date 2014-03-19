
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
bool doit(char *s,char *p){
	if(*p=='\0'){
		  cout<<"base condition p="<<*p<<" "<<"s="<<*s<<endl;
		return (*s=='\0');
	}
    if(*(p+1)=='*'){
		while((*p)==(*s)||((*p)=='.'&&(*s)!='\0')){
			if(doit(s,p+2))
				return true;
			s++;
			cout<<"running"<<endl;
		}
		cout<<"out of the loop";
		//s--;
	}
	else{
		if((*p)==(*s)||((*p)=='.'&&(*s)!='\0'))
				return doit(s+1,p+1);
	 	else{   cout<<"p="<<*p<<" "<<"s="<<*s<<endl;
				return false;
			}
		}
		return doit(s,p+2);
}	 
int main(){
	char s[50],p[50];
 cin>>s>>p;
 cout<<doit(s,p);	 
   main();
	 }
		  

