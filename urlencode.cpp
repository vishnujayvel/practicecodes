#include<iostream>
#include<string.h>
using namespace std;
int main(){
	
	char str1[100]="hello psycho ";
	int len=0,newlen=0,sc=0;
	len=strlen(str1);
	for(int i=0;i<len;i++)
	    if(str1[i]==' ')
	        sc++;
 newlen=len+sc*2;
 //char str2[newlen];
	str1[newlen]='\0';
 int i;
   for( i=len-1;i>=0;i--){
   	     if(str1[i]==' '){
   	     	str1[newlen-1]='0';
   	     	str1[newlen-2]='2';
   	     	str1[newlen-3]='%';
   	     	newlen=newlen-3;
   	     }
   	     else{
   	     	str1[newlen-1]=str1[i];
   	     	newlen--;
   	     }
   	
   	
   	
   }
   cout<<str1;
	
}

