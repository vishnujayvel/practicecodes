/*Given an array of n integers, find the 3 elements such that a[i] < a[j] < a[k] and i < j < k in 0(n) time. If there are multiple such triplets, then print any one of them.

Examples:

Input:  arr[] = {12, 11, 10, 5, 6, 2, 30}
Output: 5, 6, 30

Input:  arr[] = {1, 2, 3, 4}
Output: 1, 2, 3 OR 1, 2, 4 OR 2, 3, 4

Input:  arr[] = {4, 3, 2, 1}
Output: No such triplet
Source: Amazon Interview Question
*/
#include<iostream>
using namespace std;
void findSubsequence(int arr[],int n){
	int max=n-1;
	int min=0;
	int *larger=new int[n];
	int *smaller=new int[n];
	
	//store the index of the element smaller than arr[i] (on its left side)
	//in smaller[i] or -1 if there is no such element
	smaller[0]=-1;//its obvious since theres no element in the left of arr[0]
	for(int i=1;i<n;i++ ){
		if(arr[i]>arr[min]){
			smaller[i]=min;
		}
		else{
			smaller[i]=-1;
			min=i;
		}
		
	}
	//store the index of the element larger than arr[i] (on its right)
	//in larger[i] or -1 if there is no such element
	larger[n-1]=-1;//since theres no element in the right of arr[n-1]
	for(int i=n-2;i>=0;i--){
		if(arr[i]<arr[max]){
			larger[i]=max;
			
		}
		else{
			larger[i]=-1;
			max=i;
		}
	}
	//find the numbers which has smaller element on its left and larger element
	//on its right
	for(int i=0;i<n;i++){
		if(smaller[i]!=-1&&larger[i]!=-1){
			cout<<endl<<arr[smaller[i]]<<' '<<arr[i]<<' '<<arr[larger[i]];
			return;
			
		}
	}
	cout<<"NO such triplet";
	return;
}
int main(){
	int arr[]={34,56,45,51,69,70};
	findSubsequence(arr,6);
}
