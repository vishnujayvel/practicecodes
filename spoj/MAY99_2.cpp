#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
int p;
int manku(long long int n){
	long long int tp=5;
	while(tp<n){
		n-=tp;
		tp*=5;
		p++;
	}
	 return n-1;
 }
 
 int main(){
	 long long int n,np;
	 char word[5]={'m','a','n','k','u'};
	 int t;
	 scanf("%d",&t);
	 while(t--){
		 p=1;
		 vector<char> ans;
		 scanf("%lld",&n);
		 np=manku(n);
		 while(np>0){
			 ans.insert(ans.begin(),word[np%5]);
			 np/=5;
		 }
		 while(ans.size()<p)
		   ans.insert(ans.begin(),'m');
		 for(int i=0;i<ans.size();i++)
		   printf("%c",ans[i]);
		   printf("\n");
	   }
   }
		   
		 
