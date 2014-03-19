#include<iostream>
#include<cstdio>
#include<map>

using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,s,t,sum=0;
		map<int,int>m;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d %d",&s,&t);
			m[s]++;
			m[t]--;
		}
		for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
			cout<<it->first<<" "<<it->second<<endl;
			
		}
		for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
			sum+=it->second;
		}
		printf("\n%d",sum);
	}
}

		
