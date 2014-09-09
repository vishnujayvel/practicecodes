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
int gcd(int a,int b){
	if(a%b==0)
	   return b;
	else 
	   return gcd(b,a%b);
 }
int main(){
   int t,a,b;
   scanf("%d",&t);
   while(t--){
	   scanf("%d %d",&a,&b);
	   int g;
	   if(a>b)
	      g=gcd(a,b);
	   else
	      g=gcd(b,a);
	   int sqr=sqrt(g);
	   int c=0;
	   for(int i=1;i<=sqr;i++){
		   if(g%i==0){
			   
		      c+=2;
		      if(i==g/i)
		         c--;
		}
	}
		
	printf("%d\n",c);
}
} 
