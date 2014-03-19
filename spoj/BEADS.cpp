#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<string.h>
using namespace std;
char str[10001];
int len;
int compare(int a,int b){
	for(int k=0;k<len;k++,a++,b++){
	if(a==len)
	    a=0;
	 if(b==len)
	   b=0;
	   if(str[a]!=str[b]) 
	      return str[a]-str[b];
	   }
	   return 0;
   }   
int main(){
	int t;
	cin>>t;
	while(t--){
		int ans=0;
		int x;
		cin>>str;
		len=strlen(str);
		for(int i=1;i<len;i++){
			x=compare(ans,i);
			if(x>0) ans=i;
		}
		cout<<ans+1<<endl;
	}
}

		
