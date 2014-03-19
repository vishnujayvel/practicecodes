#include<iostream>
using namespace std;

void merge(int arr[],int temp[],int left,int mid,int right){
	int left_end=mid-1;
	int size=right-left+1;
	int temp_pos=left;
	while(left<=left_end&&mid<=right){
		if(arr[left]<=arr[mid]){
			temp[temp_pos++]=arr[left++];
         }
         else
           temp[temp_pos++]=arr[mid++];
    }
    while(left<=left_end)
        temp[temp_pos++]=arr[left++];
    while(mid<=right)
        temp[temp_pos++]=arr[mid++];
    for(int i=0;i<size;i++){
		arr[right--]=temp[right];
	}
}

void mergesort(int arr[],int temp[],int left,int right){
	int mid=(left+right)/2;
	if(left<right){
		  mergesort(arr,temp,left,mid);
		  mergesort(arr,temp,mid+1,right);
		  merge(arr,temp,left,mid+1,right);
	  }
  }
 
 int main(){
	 int arr[]={0,45,67,988,99,100,111,1233,0};
	 int temp[9];
   mergesort(arr,temp,0,8);
    for(int i=0;i<9;i++)
       cout<<arr[i]<<' ';
}
	
	
		  
