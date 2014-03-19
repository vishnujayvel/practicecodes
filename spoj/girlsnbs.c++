#include<iostream>
#include<cstdio.h>
using namespace std;

int main(){
   int n,m,r;
   cin>>n>>m;
   while(n&&m){
   if(n==0&&m==0)
       r=0;
    else if(n==0)
       r=m;
    else
       r=n;
    if(n==m)
      r=1;
    else if(n>m)
      r=n/(m+1);
    else
     r=m(n+1);
     cout<<r<<endl;
     cin>>n>>m;
     }
     
