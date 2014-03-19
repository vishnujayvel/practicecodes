#include<iostream>
#include<string.h>
using namespace std;

int main(){
	 string str;
	 cin>>str;
	 int n=str.size();
	 int nobullet=0;
     int nextempty=0;
     str+=str[0];
     for(int i=0;i<n;i++)
	    if(str[i]=='0')
	        nobullet++;
     for(int i=0;i<=n;i++){
       if(str[i]=='0'&&str[i+1]=='0')
          nextempty++;
	  }
          
        if(nextempty*n>nobullet*nobullet)
              cout<<"SHOOT\n";
         else if(nextempty*n<nobullet*nobullet)
               cout<<"ROTATE\n";
          else
              cout<<"EQUAL\n";
}
                












