#include <iostream>
using namespace std;

int main(){
int arr[3000]={0},lucky;
cout<<"ssf";
for(int i=2;i<3001;i++){
	cout<<i;
       if(arr[i]==0)
           lucky=i;
        else
           continue;
        for(int j=lucky+lucky;j<3001;j=j+lucky){
            arr[j]=-1;
        }
 }
 
    for(int i=2;i<3001;i++)
    cout<<arr[i]<<" sfsf";
    }
