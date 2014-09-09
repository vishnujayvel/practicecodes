#include<iostream>
#include<string.h>
using namespace std;

int max(int a,int b){
	if(a>b)
	  return a;
	  else
	  return b;
}
int main(){
	char str1[]="abc";
	char str2[]= "bac";
	int len1=strlen(str1);
	int len2=strlen(str2);
	int lcs[len1][len2];
	for(int i=0;i<=len1;i++)
	    lcs[i][0]=0;
    for(int j=0;j<=len2;j++)
       lcs[0][j]=0;
   for(int i=1;i<=len1;i++){
   	for(int j=1;j<=len2;j++){
   		if(str1[i-1]==str2[j-1])
   		   lcs[i][j]=1+lcs[i-1][j-1];
	     else
	       lcs[i][j]=max(lcs[i][j-1],lcs[i-1][j]);
   	}
   }
   cout<<"length of lcs is "<<lcs[len1][len2];
	
}
