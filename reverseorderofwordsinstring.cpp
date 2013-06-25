#include<iostream>
#include<string.h>
using namespace std;

void reverse(char str[],int len){
	int end=len-1;
	for(int i=0;i<len/2;i++){
		char temp=str[i];
		str[i]=str[end];
		str[end]=temp;
		end--;
	}
}
void reverseWordInString(char str[]){
	int start=0,end=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]==' '||str[i+1]=='\0'){
			reverse(str+start,end);
			cout<<"\nchanging "<<start<<' '<<end;
			start=i+1;
			end=0;
			cout<<"\nchanging "<<start<<' '<<end;
		}
		
		end++;
		
	}
}

int main(){
	char str[]="hello world vishnu vignesh";
	reverse(str,strlen(str));
	reverseWordInString(str);
	cout<<str;
	
}
