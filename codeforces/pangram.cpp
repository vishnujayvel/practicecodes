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
	string str;
	map<char,int>m;
	locale loc;
	for(int i=97;i<97+26;i++)
	   m[char(i)]=0;
if(getline(cin,str)){
	int len=str.length();
	for(int i=0;i<len;i++){
	m[tolower(str[i],loc)]=1;
    }
}
    int flag=0;
    for(int i=97;i<97+26;i++)
	   if(m[char(i)]==0){
	       flag=1;
	       break;
	   }
	  
	if(flag){
		 cout<<"not pangram";
	 }
	 else{
		 cout<<"pangram";
	 }
}


