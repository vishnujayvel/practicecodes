#include<iostream>
using namespace std;
void checkMajority(int arr[],int size,int candidate){
	int c=0;
	for(int i=0;i<size;i++)
	   if(arr[i]==candidate)
	      c++;
       if(c>size/2)
          cout<<"\nMajority element is "<<candidate<<" and it occurs "<<c<<" times";
        else
          cout<<"\nNo majority element ";
}
void findMajority(int arr[],int size){
	int maj_index=0;
	int count=1;
	
	for(int i=1;i<size-1;i++){
		if(arr[maj_index]==arr[i])
		  count++;
        else
        count--;
        if(count==0){
        
           maj_index=i;
           count=1;
       }
	}
	cout<<"\n element occuring max no. of time is "<<arr[maj_index];
	checkMajority(arr,size,arr[maj_index]);
	
}

int main(){
	//int arr[]={1,3,2,2,4,2,1,3,3,2,2,2,1,2,2};
	int arr[]={1,2,3,4,1,2,3,2,1,3,1,3,1};
	int size=sizeof(arr)/sizeof(int);
	cout<<"size of the array is "<<size;
	findMajority(arr,size);
}
