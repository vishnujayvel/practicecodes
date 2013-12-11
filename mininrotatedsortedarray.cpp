/*algorithm 
    if you divide a rotated sorted array into arr[l]...arr[mid] and arr[mid+1]
    to arr[h] ,then one of the 2 subarrays will be sorted.Ignore the sorted array
    and keep searching in the unsorted array(in which first element will be greater
    than last element)
    */
#include<iostream>
using namespace std;

int main(){
	int arr[]={2,1};
	int l=0;
	int h=sizeof(arr)/sizeof(int)-1;
	int mid;
	while(arr[l]>arr[h]){
		mid=l+(h-l)/2;
	    if(arr[mid]>arr[h]){//if nor sorted
	    	l=mid+1;
	    }
	    else//if sorted
	       h=mid;
	}
	cout<<arr[l];
	
	
}
