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

int main(){
	
	int m=5;
	int n=10;
	int rowtop=0,rowbottom=m-1,columnleft=0,columnright=n-1;
   char arr[m][n];
	char turn='X';
	while((rowtop<=rowbottom)&&(columnleft<=columnright)){
		for(int i=columnleft;i<=columnright;i++){
		         arr[rowtop][i]=turn;
		         arr[rowbottom][i]=turn;
		}
		rowtop++;
		rowbottom--;
		for(int i=rowtop;i<=rowbottom;i++){
			arr[i][columnleft]=turn;
			arr[i][columnright]=turn;
		}
		columnleft++;
		columnright--;
		if(turn=='X')
		   turn='0';
		 else
		   turn='X';
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
		   cout<<arr[i][j]<<" ";
		 cout<<endl;
	 }
 }
		
		
	 
	 
	 
	 
	
		  

