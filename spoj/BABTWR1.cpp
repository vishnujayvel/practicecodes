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
struct Box{
	int h,w,d;
};
Box boxStack[100];
Box arr[40];
int msh[100];
int compare(const void *a,const void *b){
	return (*(Box*)a).w*(*(Box*)a).d < (*(Box*)b).w*(*(Box*)b).d;
}
int maxStackHeight(Box arr[],int n){
	int index=0;
	for(int i=0;i<n;i++){
		boxStack[index]=arr[i];
		index++;
		boxStack[index].h=arr[i].d;
		if(arr[i].w>arr[i].h){
		   boxStack[index].d=arr[i].w;
		   boxStack[index].w=arr[i].h;
	   }
	   else{
		   boxStack[index].d=arr[i].h;
		   boxStack[index].w=arr[i].w;
	   }
	   index++;
	   boxStack[index].h=arr[i].w;
		if(arr[i].d>arr[i].h){
		   boxStack[index].d=arr[i].d;
		   boxStack[index].w=arr[i].h;
	   }
	   else{
		   boxStack[index].d=arr[i].h;
		   boxStack[index].w=arr[i].d;
	   }
	   index++;
   }
   n=3*n;
   qsort(boxStack,n,sizeof boxStack[0],compare);
   for(int i=0;i<n;i++){
	   msh[i]=boxStack[i].h;
   }
   for(int i=1;i<n;i++){
	   for(int j=0;j<i;j++){
		   if(boxStack[j].w<boxStack[i].w&&boxStack[j].d<boxStack[i].d){
		      msh[i]=max(msh[i],msh[j]+boxStack[i].h);
		  }
     }
  }
  int maxHeight=-1;
  for(int i=0;i<n;i++){
	  if(maxHeight<msh[i])
	     maxHeight=msh[i];
	}
	return maxHeight;
}
int main(){
	//int ans[INT_MAX];
	int t=0;
	while(1){
		int n;
		scanf("%d",&n);
		if(n==0)
		   return 0;
		for(int i=0;i<n;i++){
			scanf("%d %d %d",&arr[i].h,&arr[i].w,&arr[i].d);
		}
	cout<<maxStackHeight(arr,n)<<endl;
		t++;
	}
	/*for(int i=0;i<t;i++){
		printf("%d\n",ans[i]);
	}*/
}
			   
		
	
