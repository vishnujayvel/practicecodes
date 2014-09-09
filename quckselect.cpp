#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cstdio>
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
	
	   printf("%d",arr[k-1]);
}
int main(){
	int arr[]={34,1,2,89,56,23,5,6,3,100,90};
	//k denotes the minimum element to be found
	int k=6;
	printf("Finding the %dth minimum elements...",k);	
	quickselect(arr,11,k);
	
}
