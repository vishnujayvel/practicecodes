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
ll arr[1000];
int m,k;
bool canPartition(ll s){
	ll temp=0;
	int scribers=1;
	for(int i=0;i<m;i++){
		if(arr[i]>s){
			scribers=INT_MAX;
			break;
		}
		if(temp+arr[i]>s){
			scribers++;
			temp=0;
		}
		temp+=arr[i];
	}
	return scribers<=k;
}
		   
ll binSearch(ll arr[],ll l,ll r){
	
	ll mid=0;
	while(l<r){
		mid=(l+r)/2LL;
		if(canPartition(mid)){
			r=mid;
		}
		else{
			l=mid+1;
		}
	}
	return r;
}

void doPartition(int rIndex,ll maxPages,int scribersLeft){
	ll temp=0;
	int i;
	for(i=rIndex;i>=0;i--){
		if(temp+arr[i]>maxPages||i+1==scribersLeft-1){//ith book's no. of page is at arr[i-1]
			    doPartition(i,maxPages,scribersLeft-1);
			    break;
		  }
		  temp+=arr[i];
	  }
		if(i+1>0) printf("/ ");
	for(int j=i+1;j<=rIndex;j++){
		printf("%lld",arr[j]);
		if(j!=m-1) printf(" ");
	}
}
			                                        
	
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&m,&k);
		ll sum=0;
		REP(i,m){
			scanf("%lld",&arr[i]);
			sum+=arr[i];
		}
		ll maxPages=binSearch(arr,0,sum);
	//cout<<"max "<<maxPages<<"\n";
         doPartition(m-1,maxPages,k);
         printf("\n");
	 }
 }
