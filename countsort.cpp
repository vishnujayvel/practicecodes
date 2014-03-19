/*#include <iostream>                
using namespace std;
void Counting_sort(int [], int, int);
int main()
{
    int n,k = 0, A[15];
    cout << "Enter the number of input : ";
    cin  >> n;
    cout << "\nEnter the elements to be sorted :\n";
    for ( int i = 1; i <= n; i++)
    {
         cin >> A[i];
         if(A[i] > k)
         {
            k = A[i];
         }
    }
    Counting_sort(A, k, n);
    
}
void Counting_sort(int A[], int k, int n)
{
    int i, j;
    int B[15], C[100];
    for(i = 0; i <= k; i++)
            C[i] = 0;
    for(j =1; j <= n; j++)
            C[A[j]] = C[A[j]] + 1;
    for(i = 1; i <= k; i++)
            C[i] = C[i] + C[i-1];
    for(j = n; j >= 1; j--)
    {
            B[C[A[j]]] = A[j];
            C[A[j]] = C[A[j]] - 1;
    }
    cout << "\nThe Sorted array is : ";
    for(i = 1; i <= n; i++)
            cout << B[i] << "  " ;
}*/
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;


void countSort(int arr[],int n,int k){
	int result[100];
	int count[100];
	for(int i=0;i<k;i++)
	    count[i]=0;
	 for(int i=0;i<n;i++)
	        ++count[arr[i]];
	  for(int i=1;i<k;i++)
	       count[i]=count[i-1];
	  for(int i=n-1;i>=0;i--){
	        result[count[arr[i]]]=arr[i];
	        --count[arr[i]];
	    }
	   for(int i=0;i<n;i++)
	   cout<<result[i]<<" ";
   }
	 
	 int main(){
	int arr[]={10,10,3,3,3,3,2,1,1,7};
	
    countSort(arr,10,10);
}


