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
pair<int,int> p;

	int n;
	bool isValid(int x,int y){
		return (x>=0)&&(y>=0)&&(x<n)&&(y<n);
	}
int main(){
	int xd[8]={1, 1,0, 0,-1,-1,-1,1};
	int yd[8]={0,-1,1,-1,0,1,-1,1};
	int len;
	string str;
	char arr[100][100];
	cin>>n;
	REP(i,n){
	  cin>>arr[i];
	}
    cin>>str;
    len=str.size();
	REP(i,n)
	  REP(j,n){
	      if(arr[i][j]==str[0]){
			  db(i);
			  db(j);
	          queue<pair<pair<int,int>,int> > q;
	          REP(k,4){
							if(isValid(i+xd[k],j+yd[k]))
							     q.push(mp(mp(i+xd[k],j+yd[k]),1));
							 }
	          while(!q.empty()){
				  		pair<pair<int,int>,int> temp=q.front();
				  		
				  		int p=temp.second;
				  		 
				  		pair<int,int>temp1=temp.first;
				  		q.pop();
				  		if(arr[temp1.first][temp1.second]==str[p]){
							db(temp1.first);
							db(temp1.second);
							db(p);
				  		  p++;
				  		  if(p==len){
				  		     printf("Yes\n");
				  		     exit(0);
						 }
				  		REP(k,4){
							if(isValid(temp1.first+xd[k],temp1.second+yd[k]))
							     q.push(mp(mp(temp1.first+xd[k],temp1.second+yd[k]),p));
							 }
						 }
						 
				}
		}
	}
	printf("No");
}
			    	  
		     
