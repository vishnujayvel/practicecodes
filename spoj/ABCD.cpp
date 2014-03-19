#include<iostream>
#include<cstdio>
#include<string>
#include<string.h>
using namespace std;

int main(){
	int count[4]={0};
	int n;
	string str;
	scanf("%d",&n);
	memset(count,n,sizeof(count));
	cin>>str;
	
	int len=str.size();
	for(int i=0;i<len;i++)
	   count[(int)str[i]-'A']--;
	string row2="";
	char prev=0;
	for(int i=0;i<n;i++){
		string row1="",candidate="";
		row1+=str[i*2];
		row1+=str[i*2+1];
		for(int j=0;j<4;j++)
		  if(row1.find('A'+j)==-1)
		    candidate+='A'+j;
		if(prev!=candidate[0]){
		     row2+=candidate;
		     prev=candidate[1];
		 }
		 else{
			 row2+=candidate[1];
			 row2+=candidate[0];
			 prev=candidate[0];
		 }
	 }
	 cout<<row2<<endl;
 }
		    
		
