
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
	string p,q;
	int k,t;
	scanf("%d",&t);
	while(t--){
		cin>>k>>p>>q;
		int max1=0,len=p.size();
		for(int i=0;i<len;i++){
			for(int j=0;j<len;j++){
				 int unmatch=0;
				for(int l=0;l<=len;l++){
					if(i+l>=len||j+l>=len){
					max1=max(max1,l);
					   break;
				   }
					  if(p[i+l]!=q[j+l])
		                  unmatch++;
		               if(unmatch>k){
						  max1=max(max1,l);
		                  break;
		               }
				   }
				   
				   
			   }
		   }
		   printf("%d\n",max1);                 
		
	}
}






	

		  

