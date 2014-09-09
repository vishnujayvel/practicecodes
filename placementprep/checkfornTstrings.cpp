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
	cin>>str;
	int n=str.size();
	string temp="";
	int pos=0;
		int times=0;
	REP(i,n){
		temp+=str[i];
		int s=temp.size();
		
		REP(j,n){
			//cout<<temp[pos]<<"=="<<str[j]<<endl;
			if(temp[pos]==str[j]){
				pos++;
				if(pos==s){
					pos=0;
					
					times++;
					if(j==n-1&&times>=2){
					   cout<<"yes";
					 
					   
				   }
					   
				}
			
			}
			else{
				times=0;
			
				break;
			}
			
			
		}
	}
			cout<<"No";
			
	}
		


