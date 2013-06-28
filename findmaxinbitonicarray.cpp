/*Given an array of N distinct integers with the property that there exists 
an index K (0 <= K <= N-1) such that input[0], ..., input[K] is and increasing sequence 
and input[K], ..., input[N-1] is a decreasing sequence. Devise and algorithm to find K.
*/

/*Approach:
      Try binary search
      1)divide the array into 2 parts 
       if arr[mid-1]<arr[mid]<arr[mid+1]
               k is towards the right.So make low=mid+1
        if arr[mid-1]<arr[mid]>arr[mid+1]
              mid is k
        if arr[mid-1]>arr[mid]>arr[mid+1]
              k is towards the left.So make high=mid-1
       
       */
#include<iostream>
using namespace std;

int findk(int arr[],int n){
	int low=0;
	int high=n-1;
	int mid;
	while(low<=high){
		
        //if(low==high-1)
           // return -1;
        mid=low+(high-low)/2;
        
        if((mid==0||arr[mid-1]<arr[mid])&&(mid!=n-1||arr[mid]>arr[mid+1]))
           return mid;
        else if((mid==0||arr[mid-1]<arr[mid])&&((mid!=n-1)||arr[mid]<arr[mid+1]))
           low=mid+1;
        else if((mid==0||arr[mid-1]>arr[mid])&&((mid!=n-1)||arr[mid]>arr[mid+1]))
          high=mid-1;
        else
           return -1;
           
        
	}
	return -1;
}
int main(){
	int arr[]={1,2,78,80,65,3};
	int len=sizeof(arr)/sizeof(int);
	cout<<findk(arr,len);
}
