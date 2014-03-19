#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

int partition(int arr[],int low,int high){
	
	
	int pivot=arr[low];
	int left=low;
	int right=high;
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
		 int pivot=partition(arr,low,high);
		 quicksort(arr,low,pivot-1);
		 quicksort(arr,pivot+1,high);
	 }
 }
 
int main(){
	int arr[]={5,4,3,2,1,7,4,4};
	quicksort(arr,0,7);
	for(int i=0;i<8;i++)
	  cout<<arr[i]<<" ";
  }
  
