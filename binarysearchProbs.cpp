#include<iostream>
using namespace std;

int binSearch(int arr[],int low,int high,int k){
	if(low<=high){
	int mid=high+(low-high)/2;
	if(arr[mid]==k)
	      return mid;
	 else if(arr[mid]<k)
	     return binSearch(arr,mid+1,high,k);
	 else
	     return binSearch(arr,low,mid-1,k);
	 }
	 return -1;
}
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
void sort01(int arr[]){
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=0;
	int y=n-1;
	while(x<y){
		while(arr[x]==0&&x<y)
		    x++;
		 while(arr[y]==0&&y>x)
		    y--;
		    if(x<y)
		 swap(arr[x],arr[y]);
	 }
	 
	 for(int i=0;i<n;i++)
	    cout<<arr[i]<<" ";
 }
 
 int findMininRotatedArray(int arr[],int low,int high){
	 while(arr[low]>arr[high]){
		 int mid=low+(high-low)/2;
		 if(arr[mid]>arr[high])//if not sorted search in mid+1 to high
		    low=mid+1;
		  else
		    high=mid;//if sorted search in low to mid
		}
		return arr[low];
	}
	 

 
 
 
 
 
 int searchInRotatedArray(int arr[],int low,int high,int k){
	 if(low<=high){
		 int mid=low+(high-low)/2;
		 if(arr[mid]==k)
		    return mid;
		 if(arr[low]<arr[mid]){
			 if(k<arr[mid]&&arr[low]<=k)
		     return searchInRotatedArray(arr,low,mid-1,k);
		     else
		     return searchInRotatedArray(arr,mid+1,high,k);
		 }
		 else{
			 if(k>arr[mid]&&arr[high]>=k)
			  return searchInRotatedArray(arr,mid+1,high,k);
			  else
			  return searchInRotatedArray(arr,low,mid-1,k);
		  }
	  }
  }
			  
			    
		 
		 
		 
		 
		 
		 
		 
int main(){
	int arr[]={10,11,12,13,14};
	int arr1[]={5,6,0,2,3,4};
	cout<<findMininRotatedArray(arr1,0,5);
	//sort01(arr1);
	//cout<<binSearch(arr,0,4,14);
}
