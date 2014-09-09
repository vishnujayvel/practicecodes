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
long long int arr[1000005];
long long int read_int(){
	char r;
	bool start=false,neg=false;
	long long int ret=0;
	while(true){
		r=getchar();
		if((r-'0'<0 || r-'0'>9) && r!='-' && !start){
			continue;
		}
		if((r-'0'<0 || r-'0'>9) && r!='-' && start){
			break;
		}
		if(start)ret*=10;
		start=true;
		if(r=='-')neg=true;
		else ret+=r-'0';
	}
	if(!neg)
		return ret;
	else
		return -ret;
}

int main(){
	long long int n,m,temp=0,sum,i,max=0;
	//scanf("%lld%lld",&n,&m);
	n=read_int();
	m=read_int();
	REP(i,n){
		//scanf("%lld",&arr[i]);
		arr[i]=read_int();
		if(arr[i]>max)
			max=arr[i];
		}
	long long int left=0,right=max,t1,mid;
	while(right>=left){
		 mid=(right-left)/2+left;
		 sum=0,i=n-1;
		while(i>=0){
		 t1=arr[i]-mid;
			sum+=(t1>=0)?t1:0;
			i--;
		}
		if(sum>m){
			if(mid>temp)
			      temp=mid;
			left=mid+1;
		}
		else if(sum<m)
			right=mid-1;
		else{
		 temp=mid;	
		 break;
		}
	}
	printf("%lld\n",temp);
		 
}
	
	
