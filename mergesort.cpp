#include<iostream>
using namespace std;

void merge(int A[],int temp[],int left,int mid,int right ){
	int left_end=mid-1;
	int temp_pos=left;
	int size=right-left+1;
	while((left<=left_end)&&(mid<=right)){
		if(A[left]<=A[mid]){
			temp[temp_pos++]=A[left++];
		}
		else{
		    temp[temp_pos++]=A[mid++];
		}
	}
	while(left<=left_end)
	     temp[temp_pos++]=A[left++];
	     
	while(mid<=right)
	     temp[temp_pos++]=A[mid++];
	     
	for(int i=0;i<size;i++){
		A[right--]=temp[right];
	}
}
void mergesort(int A[],int temp[],int left,int right){
	int mid=(left+right)/2;
	if(left<right){
		mergesort(A,temp,left,mid);
		mergesort(A,temp,mid+1,right);
		merge(A,temp,left,mid+1,right);
	
	}
	
}
int main(){
	 int arr[]={0,45,67,988,99,100,111,1233,0};
	 int temp[9];
   mergesort(arr,temp,0,8);
    for(int i=0;i<9;i++)
       cout<<arr[i]<<' ';
}
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	

