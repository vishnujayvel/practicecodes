#include<iostream>
using namespace std;
bool searchElement(int mat[][4],int n,int x){
	int i=0;//1st row
	int j=n-1;//last column
	//we are starting to search from the right most top element in the sorted matrix
	while(i<n&&j>=0){
		if(mat[i][j]==x){
			cout<<"found in ["<<i<<","<<j<<"]";
			return 1;
			
		}
		else
		{
			if(mat[i][j]<x)
			    i++;//if x is greater check in the next row since rows and columns are sorted
           else
               j--;//if x is smaller check in the previous column since rows and columns are sorted
		}
	}
	return 0;//if i reaches n and j reaches -1
}
int main(){
	int mat[][4]={ {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50},
                  };
   int x=50;
   if(searchElement(mat,4,x))
      cout<<" "<<x<<" is present";
    else
      cout<<"not present";
      
}
