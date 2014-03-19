
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
   int n;
   int a[100],b[100];
   cin>>n;
   REP(i,n){
	   cin>>a[i];
	   b[i]=a[i];
   }
   //copy input array a to b
   //sort array b
   sort(b,b+n);
   int j=0,swap=0;
   REP(i,n){
	   if(a[i]==b[j]) //if equal increment j
	      j++;
	   else
	     swap++; //else increment swap
	 }
	 cout<<swap;
 }
	 
	     
   




		  

