#include<iostream>
using namespace std;

void swap(int &a,int &b){
       int temp=a;
       a=b;
       b=temp;
   }
   void display(int A[],int n){
	for(int i=0;i<n;i++)
  cout<<A[i]<<" ";
  cout<<endl;

}
    void sortColors(int a[], int arr_size)
{
   int lo = 0;
   int hi = arr_size - 1;
   int mid = 0;
 
   while(mid <= hi)
   {
      switch(a[mid])
      {
         case 0:
           swap(a[lo++], a[mid++]);
           break;
         case 1:
           mid++;
           break;
         case 2:
           swap(a[mid], a[hi--]);
           break;
      }
   }
}    
  
int main(){
int n;
int A[100];
cin>>n;
for(int i=0;i<n;i++)
  cin>>A[i];
sortColors(A,n);
for(int i=0;i<n;i++)
  cout<<A[i]<<" ";
}
