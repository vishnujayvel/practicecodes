
#include<cstdio>
#include<stdlib.h>
#include<limits.h>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int t,key;
	char str[100005];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&key);
		cin>>str;
		int len=strlen(str);
		if(key>=0&&key<=25){
			for(int i=0;i<len;i++){
				if(str[i]=='.')
				str[i]=' ';
				else{
                //cout<<"orig char is "<<str[i]<<endl;
				if(str[i]>='A'&&str[i]<='Z'){		
				str[i]=(str[i]-'A'+key)%26;
				str[i]+='A';
			   }
			   else{
				str[i]=(str[i]-'a'+key)%26;
				str[i]+='a';
			  }
				
			}
		}
		}
		else{
			for(int i=0;i<len;i++){
				if(str[i]=='.')
				str[i]=' ';
				else{
				if(str[i]>='A'&&str[i]<='Z'){
					str[i]=(str[i]-'A'+key)%26;
	                 
	             str[i]+=(32+'A');
			 }		
			   else{
				   str[i]=(str[i]-'a'+key)%26;
	                
			     str[i]-=32;
			     str[i]+='a';
		     }
			}
		}
	}
			
			cout<<str<<endl;
		
	}
}
