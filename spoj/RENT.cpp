#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

struct order1{
	int st;
	int ft;
	int gain;
	  bool operator <( const order1 &a) const
        { return ( ft < a.ft);
        }
	};
	
int main(){
	int n,t;
    scanf("%d",&t);
    while(t--){
	scanf("%d",&n);
	struct order1 order[10001];
	int dp[10001];
	for(int i=0;i<n;i++){
	  scanf("%d %d %d ",&order[i].st,&order[i].ft,&order[i].gain);
	  order[i].ft+=order[i].st;
  }
  sort(order,order+n);
  for(int i=0;i<n;i++){
	  int m=0;
	  for(int j=0;j<i;j++){
		  if(order[j].ft<order[i].st)
		     m=max(m,dp[j]);
		   else
		     break;
		 }
		 dp[i]=m+order[i].gain;
	 }
	 int mx=0;
	 for(int i=0;i<n;i++){
		 mx=max(mx,dp[i]);
	 }
	 printf("%d\n",mx);
 }
 }
