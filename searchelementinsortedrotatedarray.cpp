/*algorithm
       to search x
      divide the array to 2 parts
      m=l+(h-1)/2
        if lower part is sorted
               if  arr[l]<=x<arr[m]
			      make h=m-1 (search in sorted lower half)
               else
                  l=m+1(search in unsorted upper half)
        else (upper part is sorted)
               if arr[m]<x<=arr[h]
                  make l=m+1 (search in sorted upper half)
                else
                 h=m-1 (search in unsorted lower half)
*/

#include<iostream>
using namespace std;
int main(){
    int arr[]={880,982,99,10,55,66,77,78};//rotated sorted array
	int l=0;
	int h=sizeof(arr)/sizeof(int)-1;
	int mid;
	int x=78;
	int pos=-1;
	while(l<=h){
		 mid=l+(h-1)/2;
		 if(arr[mid]==x)
		     pos=mid;
		 if(arr[l]<arr[mid]){
		 	if(arr[l]<=x&&x<arr[mid])
		 	      h=mid-1;
            else
                  l=mid+1;
                  
		 }
		 else{
		                                // this is implicit:if(arr[mid]<arr[h])
		 	if(arr[mid]<x&&x<=arr[h])
		 	      l=mid+1;
             else
                  h=mid-1;
		 }
	
	
}
  if(pos!=-1)
       cout<<pos;
  else
      cout<<"not found";
  }
               
