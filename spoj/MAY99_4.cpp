#include<iostream>

#include <cstdio>
#include <algorithm>
using namespace std;


int Combination(int n,int r){
    if( n==r || r==0)
     return 1;

  return (Combination( n-1, r) + Combination( n-1, r-1))%10000007;
   }
 
   
   int main(){
	   int n,r;//n muffins
	   cin>>n>>r;
	
	   if(n==r)
	   cout<<"1";
	   else if(n>r){
	   cout<<Combination(n-1,r-1);
   }
	   else
	   cout<<"-1";
	   
   }	
