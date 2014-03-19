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
string DecToBin(long long int number)
{
    if ( number == 0 ) return "0";
    if ( number == 1 ) return "1";

    if ( number % 2 == 0 )
        return DecToBin(number / 2) + "0";
    else
        return DecToBin(number / 2) + "1";
}
long long int BinToDec(string number)
{
    int result = 0, pow = 1;
    for ( int i = number.length() - 1; i >= 0; --i, pow <<= 1 )
        result += (number[i] - '0') * pow;

    return result;
}

int main(){
	int t;
	string str;
	long long int n;

	while(true){
		scanf("%lld",&n);
		if(n==-1)
		   break;
		str=DecToBin(n);
		reverse(str.begin(),str.end());
		//char *c=str.c_str();
		char *a=new char[str.size()+1];
     a[str.size()]=0;
      char *end;
      memcpy(a,str.c_str(),str.size());
		long long int res=strtoull(a,&end,2);
		printf("%lld\n",res);
	}
}
		
   
