
#include<iostream>
#include<cstdio>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main(){
	int t=10;
	while(t--){
		int s,t,stime,ttime,tmin,tmax=0,n,curr=0;
		vector<pair<int,int> >list;
		scanf("%d %d",&stime,&ttime);
		stime*=2;
		ttime*=2;
		list.push_back(make_pair(stime,0));
		list.push_back(make_pair(ttime,0));
		scanf("%d",&n);
		tmin=n;
		for(int i=0;i<n;i++){
			scanf("%d %d",&s,&t);
			list.push_back(make_pair(s*2-1,+1));
			list.push_back(make_pair(t*2+1,-1));
		}
		sort(list.begin(),list.end());
		//printf("\n\n");
		for(int i=0;i<(int)list.size();i++){
			 curr+=list[i].second;
		  // printf("%d %d %d\n",list[i].first,list[i].second,curr);
			if(stime<=list[i].first&&list[i].first<=ttime){
			     tmin=min(curr,tmin);
			     tmax=max(curr,tmax);
			 }
			
		 }
		 printf("\n%d %d",tmin,tmax);
	 }
		 
			
		
	}

		
		
