#include<iostream>
using namespace std;
int binsearch(int arr[],int low,int high,int k){
	int mid=low+(high-low)/2;
	if(low<=high){
	
	if(arr[mid]==k)
	     return mid;
    else if(arr[mid]>k){
    	return binsearch(arr,low,mid-1,k);
    }
    else if(arr[mid]<k)
       return binsearch(arr,mid+1,high,k);
}  

    return -1;
	
}
int main(){


 int arr[]={23,45,67,88,99,100,111,123,144};
   cout<<binsearch(arr,0,8,1442);



}
