/*
Given an unsorted array of nonnegative integers, find a continous subarray which adds to a given number.Algorithm 
     1)This approach is similar to the problem "checking whether a pair exists in an array
     with specific sum S.
	 This is what we are going to do.Have a start and end pointer which intially points to 
	 arr[0] and a variable currentSum=arr[0]
      2)Now increase end pointer such that currentSum>S .Now we can try finding a subarray having
	  sum=S within this subarray ending with end pointer.
	  3)Now to adjust currentSum to S we need to increase the start pointer which in turn reduces
	  currentSum's value.If currentSum becomes smaller than S you have to go back to step 2.
	  4)At one point of time currentSum might become S.if theres no subarray with such sum then
	  start will be eventually equal to end.
	  5)Now start your quest from new starting point start+1 and ending point end+1
Time complexity- O(n)	  
	  	  
*/
#include<iostream>
using namespace std;

bool findSubarrayWithSpecificSum(int arr[],int len,int S,int &start,int &end){
	start=0;
	end=0;
	int currentSum=0;
	while(start<len&&end<len){
		while(currentSum<S&&end<len){
			currentSum+=arr[end];
			end++;
		}
		while(currentSum>S&&start<len){
			currentSum-=arr[start];
			start++;
		}
		if(currentSum==S)
		  return 1;
	}
	return 0;
}
int main(){

	int arr[] = {1, 4, 20, 3, 10, 5};
	int len=sizeof(arr)/sizeof(int);
	int S=33;
	int start,end;
	if(findSubarrayWithSpecificSum(arr,len,S,start,end))
	    cout<<"subarray is from pos "<<start<<" to "<<end;
    else
        cout<<"not found";
}
