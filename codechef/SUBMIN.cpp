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
	int arr[55];
	int n,k,q;
	scanf("%d",&n);
	int max=0;
	REP(i,n){
		scanf("%d",&arr[i]);
		}
	scanf("%d",&q);
	REP(i,q){
		
		vector<set<int> >v(55);
		cout<<v[0].max_size();
		cout<<"v size is "<<v.size();
		int c=0,lcomb,rcomb;
		scanf("%d",&k);
		REP(j,n){
			lcomb=0,rcomb=0;
				
			if(arr[j]==k){
				c++;
				//left
				for(int l=j-1;l>=0;l--){
					if(arr[l]>=k)
						v[l].insert(j),lcomb++;
					else
						break;
				}
				//cout<<"\nlcomb="<<lcomb<<endl;
				//right
				for(int l=j+1;l<n;l++){
				     if(arr[l]>=k)
						v[j].insert(l),rcomb++;
					else
					    break;
					}
				for(int u=k-lcomb;u<k;u++)
					for(int w=k+1;w<=k+rcomb;w++)
						v[u].insert(w);
				
				}
				
			}
			//for(int i=0;i<51;i++)
				//	c+=v[i].size();
  
		printf("%d\n",c);
		}
	}

		
	
