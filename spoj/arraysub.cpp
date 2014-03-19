
#include<iostream>
#include<cstdio>
#include<deque>
using namespace std;

void printKMax(int arr[],int n,int k){
	int i;
	deque<int> dq;
	for(i=0;i<k;i++){
	while((!dq.empty())&&arr[i]>=arr[dq.back()]){
		dq.pop_back();
	}
	dq.push_back(i);
   }
   for(;i<n;i++){
	   printf("%d ",arr[dq.front()]);
	   while((!dq.empty())&&dq.front()<=(i-k))
	    dq.pop_front();
	    while((!dq.empty())&&arr[i]>=arr[dq.back()]){
			dq.pop_back();
		}
		dq.push_back(i);
	}
	 printf("%d ",arr[dq.front()]);
 }
 int main()
{    int n,k;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	  scanf("%d",&arr[i]);
	 scanf("%d",&k);
    printKMax(arr, n, k);
    return 0;
}
	   
	
	
	
