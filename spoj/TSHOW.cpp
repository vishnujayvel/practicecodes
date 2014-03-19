#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
int p;
int manku(long long int n){
	long long int tp=2;
	while(tp<n){
		n-=tp;
		tp*=2;
		p++;
	}
	 return n-1;
 }
 
 int main(){
	 long long int n,np;
	 int t;
	 scanf("%d",&t);
	 while(t--){
		 p=1;
		 vector<int> ans;
		 scanf("%lld",&n);
		 np=manku(n);
		 if(np==0)
		 ans.push_back(5);
		 while(np>0){
			 ans.insert(ans.begin(),(np%2)?6:5);
			 np/=2;
		 }
		 while(ans.size()<p)
		   ans.insert(ans.begin(),5);
		 for(int i=0;i<ans.size();i++)
		   printf("%d",ans[i]);
		   printf("\n");
	   }
   }
		   
		 

