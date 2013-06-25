#include<iostream>
#include<string.h>
using namespace std;
int main(){
	
	char str1[]="hello worlda";
	char str2[]="lets all woraak";
	int s1[256]={0},s2[256]={0};
	int flag=1;
	int i=0,j=0;
	while(str1[i]!='\0'){
	
	    s1[str1[i]]++;
	    i++;
	}
    while(str2[j]!='\0'){
    	s2[str2[j]]++;
    	j++;
    }
    j=0;
    while(str2[j]!='\0'){
    	
    	if(s2[str2[j]]>1){
    		
    	if(s1[str2[j]]!=0){
    		j++;
    		
    		continue;
    		
    	}
    	else{
    	
    	 flag=0;
    	 
    	 break;
        }
    }
    j++;
    }
	if(flag==1)
	   cout<<"yes";
    else
      cout<<"no";
}
