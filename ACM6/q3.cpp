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
int num;
map<int,int>m;
void primeFactors(int n)
{
    while (n%2 == 0)
    {   m[2]++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {       if(i==3)
      
        while (n%i == 0)
        {   if(i==3)
             m[i]++;     
             n = n/i;
        }
    }
 
    if (n > 2)m[n]++;
}	
int main()
{
int t;
scanf("%d",&t);
while(t--){
m.clear();
scanf("%d",&num);
primeFactors(num);
if(((m.size()%2))==0)
   cout<<"Yes\n";
 else
  cout<<"No\n";
}
}
