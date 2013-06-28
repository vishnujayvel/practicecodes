#include<iostream>
#include<stdlib.h>
using namespace std;

void swap(int arr[],int left,int right){
	int temp=arr[left];
	arr[left]=arr[right];
	arr[right]=temp;
}
int partition(int arr[],int low,int high){
	int left,right,pivot;
	int r=low+(rand()%(high-low+1));
	swap(arr[r],arr[low]);
	pivot=arr[low];
	left=low;
	right=high;
	while(left<right){
		while(arr[left]<=pivot)
                left++;
	    while(arr[right]>pivot)
		       right--;
	   if(left<right)
	           swap(arr[left],arr[right]);
	    		
 	}
 	arr[low]=arr[right];
 	arr[right]=pivot;
 	return right;
 		
}
int quickselect(int arr[],int low,int high,int k){
	if(low==high)
	 return low;
	
		int pivot=partition(arr,low,high);
		int i=pivot-low+1;
		if(i>k)
		quickselect(arr,low,pivot-1,k);
		else if(i<k)
		quickselect(arr,pivot+1,high,k-i);
		else
		return pivot;
	
}
int main(){//modifed quicksort
	int arr[]={0,66,1,55,2,7,9};
	int k=3;
	cout<<"3rd minimum number is ";
	int p=quickselect(arr,0,6,k);
	cout<<arr[p];
}
