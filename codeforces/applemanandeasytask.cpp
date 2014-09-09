
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
	char arr[102][102];
	int n;
	scanf("%d",&n);
	REP(i,n){
		REP(j,n){
			cout<<"enter "<<i<<" "<<j;
			scanf("%c",&arr[i][j]);
		}
	}
	int c;
	REP(i,n){
		REP(j,n){
			 c=0;
			if(i-1>=0&&arr[i-1][j]=='o')
			    c++;
			if(j-1>=0&&arr[i][j-1]=='o')
			    c++;
			if(i+1<n&&arr[i+1][j]=='o')
			    c++;
			if(j+1<n&&arr[i][j+1]=='o')
			    c++;
			    
			 if(c%2!=0){
			    printf("NO\n");
			    return 0;
			}
		}
	}
	printf("YES\n");
	return 0;
}
