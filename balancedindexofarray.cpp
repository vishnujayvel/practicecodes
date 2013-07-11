/*find the balance index of an array where balanced index i is defined
 as the one whose left sum is equal to the right sum of the index . 
i.e 
summation (1 to i-1) = summation (i+1 to length of an array)
*/#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int arr[]={-1,2,5,4,2,4,0};
	int sum=0;
	int n=7;
	int leftsum=0;
	//find the sum of the array
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	//decrement ith element from array 
	//and add that to leftsum.Do this step along while traversing
	//from left to right and when both leftsum and remaining sum is equal
	//i is the balanced index of array
	for(int i=0;i<n;i++){
	    sum-=arr[i];
		if(sum==leftsum){
			cout<<i;
			exit(0);
		}

		leftsum+=arr[i];
	}
	cout<<"no balancedindex of array";
	
}
