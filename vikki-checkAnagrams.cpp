#include<iostream>
#include<string.h>
using namespace std;
bool checkAnagrams(char *s,char *t){
	int num_unique,num_counted;
	num_unique=num_counted=0;
	int CharCount[256]={0};
	if(strlen(s)!=strlen(t))
							return false;
	for(int i=0;i<strlen(s);i++){
		if(CharCount[s[i]]==0)
  		  num_unique++;
        CharCount[s[i]]++;
	}
	for(int i=0;i<strlen(t);i++){
		if(CharCount[t[i]]==0)
							  return false;
		CharCount[t[i]]--;
		if(CharCount[t[i]]==0){
		num_counted++;
		
				   }
				   
	}
	if(num_counted==num_unique)
 																											return true;
 return false;
}
int main(){
	char s[]="helloa";
	char t[]="oheall";
	if(checkAnagrams(s,t))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;	
}
