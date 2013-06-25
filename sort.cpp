#include<iostream>
using namespace std;
void bubbleSort(int arr[],int size){
	int swapped=1;
	for(int pass=size-1;pass>=0&&swapped;pass--){
		swapped=0;
		for(int i=0;i<pass-1;i++){
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				swapped=1;
			}
		}
	}
}
void insertionSort(int arr[],int size){
	
	for(int i=2;i<size-1;i++){
		int k=arr[i];
		int j=i;
		while(arr[j-1]>k&&j>=1){
			arr[j]=arr[j-1];
			j--;
		}
		arr[j]=k;
	}
	
}
//selection sort --->repeatedly selects the smallest item 
//and places it in the front
void selectionSort(int arr[],int size){
	int min,temp;
	for(int i=0;i<size-1;i++){//size-1 coz if you find size-1 minimum elements and put it in the
	//the front.the last element will already be in the sorted order
		min=i;
		for(int j=i+1;j<size;j++){
			if(arr[j]<arr[min])
			   min=j;
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
		
	}
}
int main(){
	int arr[]={1,44,33,22,1,55};
	//bubbleSort(arr,6);
	//selectionSort(arr,6);
	insertionSort(arr,6);
	for(int i=0;i<6;i++){
		cout<<arr[i]<<' ';
	}
}
