/*
 * Given an array arr[], find the maximum j – i such that arr[j] > arr[i]
 *
 * Solution :
 * Create 2 arrays 
 *     1)LeftMin : stores the minimum element to the left of arr[i] including arr[i]
 *     2)RightMax : stores the maximum element to the right of arr[i] including arr[i]
 * Initialize maxDiff=-1
 * Create a loop comparing leftMin[i] and RightMax[j] starting with i=0 and j=0 till i or j reaches n
 *     If LeftMin[i]>RightMax[j]{
	     maxDiff=max(maxDiff,j-i)
 *                 j++
 *     }
 *     else  
 *                 i++
 * 
 * maxDiff holds the maximum j-i 
 */
#include<iostream>
using namespace std;

int max(int a,int b){
	if(a>b)
	 return a;
	else
	 return b;
	 
 }
 int min(int a,int b){
	 if(a>b)
	   return b;
	 else
	   return a;
}

int findMaxDiff(int arr[],int n){
	int LeftMin[n];
	int RightMax[n];
    LeftMin[0]=arr[0];
     for(int i=1;i<n;i++)
	     LeftMin[i]=min(LeftMin[i-1],arr[i]);
	RightMax[n-1]=arr[n-1];
	for(int i=n-2;i>=0;i--)
	     RightMax[i]=max(RightMax[i+1],arr[i]);
    int i=0;
    int j=0;
    int maxDiff=-1;
    while(i<n&&j<n){
		  if(LeftMin[i]<RightMax[j]){
			  
		  maxDiff=max(maxDiff,j-i);
		         j++;
			 }
		  else
		         i++;
	  }
	  return maxDiff;
  }
	
	
int main(){
	int arr[]={34, 8, 10, 3, 2, 80, 30, 33, 1};

    int n = sizeof(arr)/sizeof(arr[0]);
    int maxDiff = findMaxDiff(arr, n);
    cout<<maxDiff;
    return 0;
}
	
	
