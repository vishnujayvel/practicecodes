#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int arr[]={2,31,12,-15,4,1};
	int n=6,temp;
	int left,right;
	sort(arr,arr+n);
	for(int i=0;i<=n-1;i++){
		left=i+1;
		right=n-1;
		while(left<right){
			temp=arr[left]+arr[i]+arr[right];
			if(temp>0)
			   right--;
            else if(temp<0)
               left++;
            else {
            
              cout<<"exist";
              exit(0);
          }
		}
	}
	cout<<"doesnt exist";
}
