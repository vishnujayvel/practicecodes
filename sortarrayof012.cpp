/*
   Given an array A[] consisting 0s, 1s and 2s, write a function that sorts A[]. The functions should put all 0s first, then all 1s and all 2s in last.

Example
Input = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
Output = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}

The problem was posed with three colours, here `0′, `1′ and `2′. The array is divided into four sections:

a[1..Lo-1] zeroes (red)
a[Lo..Mid-] ones (white)
a[Mid..Hi] unknown
a[Hi+1..N] twos (blue)
Three flags should be used for pointing the last of 0, the last of 1, and the first of 2.

 

The unknown region is shrunk while maintaining these conditions

Lo := 1; Mid := 1; Hi := N;
while Mid <= Hi do
Invariant: a[1..Lo-1]=0 and a[Lo..Mid-1]=1 and a[Hi+1..N]=2; a[Mid..Hi] are unknown.
case a[Mid] in
0: swap a[Lo] and a[Mid]; Lo++; Mid++
1: Mid++
2: swap a[Mid] and a[Hi]; Hi--




source: http://www.csse.monash.edu.au/~lloyd/tildeAlgDS/Sort/Flag/
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
void sortArr(int arr[],int n){
	int low=0;
	int mid=0;
	int high=n-1;
	while(mid<=high){
		switch(arr[mid]){
			case 0:swap(arr[low],arr[mid]);
					low++;
					mid++;
					break;
			case 1:mid++;
				   break;
		    case 2:swap(arr[high],arr[mid]);
		           high--;
		           
		 }
	 }
 }
			
int main(){
	int arr[]={1,2,0,0,2,1,1,2,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	sortArr(arr,n);
	for(int i=0;i<n;i++)
	 cout<<arr[i]<<' ';
 }
 
	
