#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		 int num,x,n;
		
		scanf("%d %d",&x,&n);
		long long int c=0;
		vector<int> arr;
		int count[n];
		memset(count,0,sizeof(count));
		for(int j=0;j<n;j++){
		 scanf("%d",&num);
		 count[num]++;
		}
		for(int j=0;j<n;j++){
			if(count[j]){
				int diff=x-j;
				if(diff>=0&&diff<=1000)
				c+=count[diff]*(count[j]-(diff==j));
			}
		}
		cout<<c/2;
	}
}
