#include<iostream>
using namespace std;
main()
{
    int t;
	scanf("%d",&t);
	while(t--)
	{
	int a[105]={0},n=3,i;
	long long int j;
	long long int sum=0;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	
	bool prev[sum+2],curr[sum+2];
	
	for(j=1;j<=sum;j++)	
		prev[j]=0;//base condition 1 : if sum is not zero prev[j]=0
	prev[0]=1;//base condition 2 : if sum is zero prev[0]=1
	for(i=1;i<=n;i++)	
	{
		
		int lastelement=a[i-1];
		prev[0]=1;
		for(j=1;j<=sum;j++)
		{

			if(j<lastelement)	
				curr[j]=prev[j];
			else
				curr[j]=prev[j] || prev[j-lastelement];
		}
		
		for(int k=1;k<=sum;k++)
		{
			prev[k]=curr[k];//update previous array with the current array
			//value for the next iteration
		}
	
	
}
long long int sum1=0;
	for(j=1;j<=sum;j++)	
	{
		
		sum1+=(curr[j])?(j):(0);
	}
    cout<<sum1<<endl;
}
}
