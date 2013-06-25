#include<iostream>
using namespace std;
int main(){
	int a[][4]={{1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                {13,14,15,16}
                
                };
   int k=0;///row start index
   int m=4;//row end index
   int l=0;//column start index
   int n=4;//column end index
   while(k<m&&l<n){
   	for(int i=l;i<n;i++)
   	   cout<<a[k][i]<<' ';//traverse the first row k in the leftover rows
   
   k++;
   for(int i=k;i<m;i++)
      cout<<a[i][n-1]<<' ';//traverse the last column n-1 from the leftover columns
   n--;
   if(k<m){
   	for(int i=n-1;i>=l;i--)//traverse the last row m-1 
   	 cout<<a[m-1][i]<<' ';
   	 m--;
   }
   if(l<n){
   	for(int i=m-1;i>=k;i--)//traverse the first column l from bottom to top
   	cout<<a[i][l]<<' ';
   	l++;
   }
}
}
