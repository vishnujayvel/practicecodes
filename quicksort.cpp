#include<iostream>
using namespace std;

void swap(int arr[],int left,int right){
	int temp=arr[left];
	arr[left]=arr[right];
	arr[right]=temp;
}
int partition(int arr[],int low,int high){
	int left,right,pivot=arr[low];
	left=low;
	right=high;
	while(left<right){
		while(arr[left]<=pivot)
		  left++;
        while(arr[right]>pivot)
          right--;
        if(left<right)
          swap(arr,left,right);
          
	}
	arr[low]=arr[right];
	arr[right]=pivot;
	return right;
}
void quicksort(int arr[],int low,int high){
	if(low<high){
		int pivot=partition(arr,low,high);
		quicksort(arr,low,pivot-1);
		quicksort(arr,pivot+1,high);
	}
}
int main(){
	int arr[]={22,33,1,6,7,11,2};
	quicksort(arr,0,6);
	for(int i=0;i<=6;i++){
		cout<<arr[i]<<' ';
	}
}
