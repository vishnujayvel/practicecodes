#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

string dp[110][110];
string ans="";
int len1,len2;
string string1,string2;
string INF="-1";
string adfruit(int i,int j){
	if(dp[i][j]!=INF)
	  return dp[i][j];
	if(len1==i&&len2==j)
	   return "";
	   if(i==len1)
	     return dp[i][j]=string2.substr(j);
	    if(j==len2)
	      return dp[i][j]=string1.substr(i);
	 if(string1[i]==string2[j])
	    return dp[i][j]=string1[i]+adfruit(i+1,j+1);
     string candidate1=string1[i]+adfruit(i+1,j);
     string candidate2=string2[j]+adfruit(i,j+1);
     if(candidate1.size()<candidate2.size())
       return dp[i][j]=candidate1;
      else
       return dp[i][j]=candidate2;
   }
 
 int main(){
	 while(cin>>string1>>string2){
		 
	 for(int i=0;i<110;i++){
		 for(int j=0;j<110;j++){
			 dp[i][j]=INF;
		 }
	 }
	 len1=string1.size();
	 len2=string2.size();
	 printf("%s\n",adfruit(0,0).c_str());
 }
}
		  
