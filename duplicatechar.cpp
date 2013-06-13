
//Time complexity O(n^2)
#include<iostream>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
#include<map>
#include<set>
using namespace std;
void removeDuplicate1(char *str){//using hashmap
	map<char,char> m;
	
	char temp[1];
	for(int i=0;i<strlen(str);i++)
	   m[str[i]]='\0';
	   strcpy(str," ");
	   map<char,char>::iterator i;
	   int j=0;
	   for(i=m.begin();i!=m.end();i++){
	   	str[j++]=i->first;
	   	
	   }
	    str[j]='\0';  
	
}
void removeDuplicate2(char *str){//using hashmap
	set<char> m;
	
	char temp[1];
	for(int i=0;i<strlen(str);i++)
	   m.insert(str[i]);
	   
	   set<char>::iterator i;
	   int j=0;
	   for(i=m.begin();i!=m.end();i++){
	   	str[j++]=*i;
	   	
	   }
	    str[j]='\0';  
	
}

void removeDuplicate(char* str){
	 if(str=='\0')
	    return;
  int pivot=1;
  int len=strlen(str);
  //i runs from 2nd element to last element because j runs from first element to pivot
  //element and we need not compare same elements 
  for(int i=1;i<len;i++){
  	int j;
  	//make all elements before the pivot as unique
  	
 	 for(j=0;j<pivot;j++)
 	    if(str[j]==str[i])
  	          break;
      if(j==pivot){
      	//if j==pivot (str to str+pivot) is a unique subarray where str[pivot]=str[i]
      	
      	  str[pivot]=str[i];
      	  pivot++;
      }
  	       
  }
    str[pivot]='\0';

}
int main(){
	char str[]="asddfffafffafffafaffafaf";
	    removeDuplicate2(str);
	    cout<<str;
	
}
