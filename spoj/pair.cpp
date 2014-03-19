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
struct act{
	int st;
	int ft;
	//int gain;
	  bool operator <( const act &a) const
        { return ( ft < a.ft);
        }
	};
 //int compare(int* rowA, int* rowB){
   //  return ( (rowA[0]<rowB[0]) || ((rowA[0]==rowB[0])&&(rowA[1]<rowB[1])) );
 //}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		struct act arr[n];
		int i;
		for(i=0;i<n;i++){
			cin>>arr[i].st>>arr[i].ft;
		}
		sort(arr,arr+n);
		int finish=arr[0].ft, c = 1;
		for( i=1;i<n;i++){
			if( finish <= arr[i].st ){
				c++;
				finish = arr[i].ft;
			}
		}
		printf("%d\n", c);
	}
	return 0;
}
