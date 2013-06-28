/*
Kandane's algorithm-dynamic programming
Time Complexity-O(n)
Initialize:
    max_so_far = 0
    max_ending_here = 0

Loop for each element of the array
  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_ending_here < 0)
            max_ending_here = 0
  (c) elseif(max_so_far < max_ending_here)
            max_so_far = max_ending_here
return max_so_far
*/

#include<iostream>
using namespace std;
int maximumSuminContiguousSubarray(int arr[],int len){
	int max_so_far=0;
	int max_ending_here=0;
	for(int i=0;i<len;i++){
		max_ending_here+=arr[i];
		if(max_ending_here<0)
		     max_ending_here=0;
         else if(max_so_far<max_ending_here)
             max_so_far=max_ending_here;         
 	}
 	return max_so_far;
}

int main(){
	int arr[]={144,3,0,-8,5,34,-600,99,100};
	int len=sizeof(arr)/sizeof(int);
	cout<<maximumSuminContiguousSubarray(arr,len);
	
}
