#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,k;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
			cin>>arr[i];
     sort(arr,arr+n);
	int count=0;
	for(int i=0;i<n;i++)
	     if(binary_search(arr,arr+n,arr[i]+k))
		    count++;
	cout<<count;	
}
