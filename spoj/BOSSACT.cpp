#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<map>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
 int compare(int* rowA, int* rowB){
     return ( (rowA[0]<rowB[0]) || ((rowA[0]==rowB[0])&&(rowA[1]<rowB[1])) );
 }

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n][2],i;
		for( i=0;i<n;i++){
			cin>>arr[i][0]>>arr[i][1];
		}
		sort(arr,arr+n,compare);
		int finish=arr[0][1], c = 1;
		for( i=1;i<n;i++){
			if( finish <= arr[i][0] ){
				c++;
				finish = arr[i][1];
			}
		}
		printf("%d\n", c);
	}
	return 0;
}

