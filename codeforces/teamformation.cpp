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
	int t;
	ll arr[1000005];
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		REP(i,n){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int ans=0,mins=0;
		ll min1=INT_MAX,temp;
		int j;
		for(int i=0;i<n;){
			temp=arr[i];
			//cout<<"start "<<i<<endl;
			//cout<<arr[i]<<" ";
			for(j=i+1;j<n;j++){
				//cout<<arr[j]<<" ";
				if(arr[j]==arr[j-1]+1)
				    temp+=arr[j];
				else
				    break;
			}
			if(min1>temp){
				 min1=temp;
				 mins=j-i;
			 }
			 i=j;
		 }
		 if(min1==INT_MAX)
		   cout<<"1\n";
		   else
        cout<<mins<<endl;
	}			
			
}

