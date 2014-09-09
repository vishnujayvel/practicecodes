#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
       int arr[]={1,0,1,0,0,0,1,1,1};
       int n=sizeof arr/sizeof (int);
       
       //sort
      int left=0;
      int right=n-1;
      while(left<right){
		  while(arr[left]==0&&left<right)
		      left++;
		   while(arr[right]==1&&right>left)
					right--;
		   if(left<right){
			   arr[left]=0;
			   arr[right]=1;
			   left++;
			   right--;
		   }
	   }
		          
			
        for(int i=0;i<n;i++)
               cout<<"\n"<<arr[i];
	      
}
