#include<iostream>
#include<stdlib.h>
using namespace std;

void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int partition(int arr[],int low,int high){
	int left,right,pivot;
	int r=low+(rand()%(high-low+1));
	swap(arr[r],arr[low]);
	pivot=arr[low];
	left=low;
	right=high;
	/*very imp: dont confuse between low,high and left,right
	for traversing and swapping you need left and right*/
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
void quickselect(int arr[],int n,int k){
	int low=0;
	int high=n-1;
	int index=partition(arr,low,high);
	while(index!=k-1){
		if(index>k-1){
			high=index-1;
			index=partition(arr,low,high);
			
		}
		else{
			low=index+1;
			index=partition(arr,low,high);
		}
	}
	for(int i=0;i<k;i++)
	   cout<<arr[i]<<" ";
}
int main(){
	int arr[]={34,1,2,89,56,23};
	cout<<"Finding the minimum 2 elements...";
	quickselect(arr,6,2);
	
}
