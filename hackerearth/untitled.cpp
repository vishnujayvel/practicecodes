#include <iostream>
#define MAX 100
using namespace std;
int a[][4]={{1,2,3,4},{2,2,3,4},{3,2,3,4},{4,5,6,7}};
    
int longestPath(int n,int m)
{
	int LP[n][m];
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	LP[i][j]=1;
	
	for(int i=m-2;i>=0;i--){
	if(a[n-1][i]>a[n-1][i+1])
	LP[n-1][i]+=LP[n-1][i+1];
	}
	
	for(int i=n-2;i>=0;i--){
	if(a[i][m-1]>a[i+1][m-1])
	LP[i][m-1]+=LP[i+1][m-1];
	}
	
	for(int i=n-2;i>=0;i--)
	{
		for(int j=m-2;j>=0;j--)
		{
			if(a[i][j]<a[i+1][j])
			{
				if(a[i][j]<a[i][j+1])
				{
					LP[i][j]+=LP[i+1][j]>LP[i][j+1]?LP[i+1][j]:LP[i][j+1];
				}
				else
				{
					LP[i][j]+=LP[i+1][j];
				}
			}
			else if(a[i][j]<a[i][j+1])
				{
					LP[i][j]+LP[i][j+1];
				}
		}
	}
	
	return LP[0][0];
	
}
int main()
{
    cout<<" "<<longestPath(4,4);
}
