#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	
	
	
	char str1[]="hello";
	char str2[]="elhloczfzff";
	sort(str1,str1+strlen(str1));
	sort(str2,str2+strlen(str2));
	if(strcmp(str1,str2)==0)
	   cout<<"YES";
	   else
	   cout<<"NO";
	   
}
