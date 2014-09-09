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
ll getPowerTerm(ll n,ll &power){
	ll powerOf5=5;
	while(n>powerOf5){
		n-=powerOf5;
		powerOf5*=5;
		power++;
	}
	return n-1;
}
		
int main(){
	int t;
	scanf("%d",&t);
	map<int,char>m;
	m[0]='m';
	m[1]='a';
	m[2]='n';
	m[3]='k';
	m[4]='u';
	while(t--){
	    ll n;
	    vector<char>ans;
	    scanf("%lld",&n);
	    ll power=1;
	    ll powerTerm=getPowerTerm(n,power);
	    while(powerTerm>0){
			ans.push_back(m[powerTerm%5]);
			powerTerm/=5;
		}
		while(power>ans.size()){
		     ans.push_back('m');
		 }
		for(int i=ans.size()-1;i>=0;i--)
			cout<<ans[i];
		cout<<endl;
	
	}
		     
				
	     
	 
	} 
	 
	 
	 
	 
	 
		  


