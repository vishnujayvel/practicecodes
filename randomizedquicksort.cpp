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
void quicksort(int arr[],int low,int high){
	if(low<high){
		int p=partition(arr,low,high);
		quicksort(arr,low,p-1);
		quicksort(arr,p+1,high);
	}
}
int main(){
	int arr[]={34,1,2,89,56,23,4,3,2,1};
	quicksort(arr,0,9);
	for(int i=0;i<9;i++){
		cout<<arr[i]<<" ";
	}
}
