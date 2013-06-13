#include<iostream>
#include<string.h>
using namespace std;
void reverse(char *str){
	char *end=str+strlen(str);
	char temp;
	if(str){
		end=
		--end;
		while(str<end){
			temp=*str;
			*str++=*end;
			*end--=temp;
		}
	}
	
}
int main(){
	char str[]="hello";
	reverse(str);
	cout<<str;
	
}
