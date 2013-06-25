#include<iostream>
using namespace std;
int main(){
	int arr[]={0,0,0,0,0};
	int len=sizeof(arr)/sizeof(int);
	int low=0;
	int high=len-1;
	int pos=-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]==1){
			
			if(arr[mid-1]==1){
				high=mid-1;
				continue;
			}
			else{
			
			   pos= mid;
			   break;
			}
	   }
	   else{
	   	   low=mid+1;
	   	   continue;
	   }
}
  if(pos!=-1)
      cout<<"position= "<<pos;
      else
      cout<<"not found";
  }
