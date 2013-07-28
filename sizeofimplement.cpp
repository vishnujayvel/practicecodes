#include<iostream>
using namespace std;
#define mysizeof(data) (char*)(&data+1)-(char*)(&data)

int main(){
	
	char arr[]={1,2,3};
	int arr1[]={1,2,3};
	cout<<mysizeof(arr);
	cout<<endl<<mysizeof(arr1);
}
