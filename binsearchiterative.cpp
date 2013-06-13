#include<iostream>
using namespace std;
int binsearch(int arr[],int low, int high,int k){
      int mid;
       while(low<=high){
       	mid=low+(high-low)/2;
       if(arr[mid]==k)
          return mid;
        else if(arr[mid]<k)
              low=mid+1;
        else
              high=mid-1;
   }
   return -1;
	
	
	
	
}

int main(){
	
 int arr[]={23,45,67,88,99,100,111,123,144};
   cout<<binsearch(arr,0,8,555);
 
}
