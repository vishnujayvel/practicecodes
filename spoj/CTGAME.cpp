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
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
long long int getArea(vector<int>&arr){
	if(arr.size()==0)
	  return 0;
	 arr.pb(0);
	stack<int>s;
	long long int area=0;
	
	int i=0;
	int n=arr.size();
	while(i<n){
		if(s.empty()||arr[i]>=arr[s.top()])
		    s.push(i++);
		 else{
			 int t=s.top();
			 s.pop();
			 area=max(area,(long long int)arr[t]*(long long int)(s.empty()?i:i-s.top()-1));
		 }
	 }
	 return area;
			 
}
int main(){
	int m,n;
	int t;
	scanf("%d\n",&t);
	while(t--){
		scanf("%d %d\n",&m,&n);
		int mat[m][n];
		char s[m][n];
		long long int area=0;
		char c;
		         
     for(int i=0;i<m;i++)
         for(int j=0;j<n;j++)
         {
             scanf("\n%c",&s[i][j]);
             if(s[i][j]=='R')
                 mat[i][j]=0;
             else if(s[i][j]=='F')
                 mat[i][j]=1;
         }
	/*	cout<<"\n1\n";
		REP(i,m){
			REP(j,n){
				cout<<s[i][j]<<" ";
			}
			cout<<endl;
		}
		
		REP(i,m){
			REP(j,n){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
	*/	
	   FOR(i,1,m){
		   REP(j,n){
			   if(mat[i][j]==1)
			      mat[i][j]=mat[i-1][j]+1;
			  }
		  }
		/*  cout<<"hist\n";
		  REP(i,m){
			REP(j,n){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}*/
	  REP(i,m){
		vector<int> v(mat[i],mat[i]+n);
	    area=max(getArea(v),area);
   }
	   printf("%lld\n",area);
			     				
	}
}			
