#include<iostream>
using namespace std;
int main(){
	int arr[]={1,1,2,2,2,3,3,3,3,3};
	int odd=arr[0];
	for(int i=1;i<7;i++){
		odd^=arr[i];
	}
	cout<<odd;
}
