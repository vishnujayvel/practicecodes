// assuming that the 2 arrays are of same size (m=n)
//calculate the medians m1 and m2 of arr1[] and arr2[]
// if(m1==m2) return m1
// if m1>m2 median is present either in 
//    a) arr2[n/2....n-1] or b)arr1[0....n/2]
// if m2>m1 median is present either in
//    a)arr1[n/2....n-1] or b)arr2[0....n/2]
// if size of both the arrays are 2 then
// median=(max(arr1[0],arr2[0])+min(arr1[1],arr2[1]))/2
//else repeat the above step

#include<iostream>
#include<stdlib.h>
using namespace std;
int median(int arr[],int left,int right){
   return arr[(right+(left-right)/2)];
}
int max(int a,int b){
	if(a>b)
	   return a;
	 else
	    return b;
}
int min(int a,int b){
	if(a>b)
	  return b;
	else
	  return a;
  }
  
	
int main(){
	int n;
	int arr1[]={5,78,122,145};
	int arr2[]={89,90,123,200};
	int l1=0,r1=3,l2=0,r2=3;
	int m1,m2;
	while(1){
		
	 m1=median(arr1,l1,r1);
	 m2=median(arr2,l2,r2);
	 n=(r2-l2)/2;
	 if(n==2){
		 cout<<(max(arr1[l1],arr2[l1])+min(arr1[r2],arr2[r2]))/2;
		 break;
	 }
	 
	if(m1==m2){
	  cout<<m1;
	  break;
  }
	  if(m1>m2){
		  l2=n/2;
		  r1=n/2;
	  }
	  else{
		  l1=n/2;
		  r2=n/2;
	  }
  }
}
	  
		  
	  
	
