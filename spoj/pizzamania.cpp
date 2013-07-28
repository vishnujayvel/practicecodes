/*Hint:
  Sort all the n friend's money .
  Do a modified search to find the count of pairs whose money sum equals the pizza price.(in other words
  finding the number of pairs in the array whose sum equals pizza price )
*/
#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int findPair(int data[], int length, int sum)
{
    int c=0;
    if(length < 1 )
        return c;

    int ahead = length - 1;
    int behind = 0;

    while(ahead > behind)
    {
        long long curSum = data[ahead] + data[behind];

        if(curSum == sum)
        {
            c++;
            behind++;
            ahead--;
        }
        else if(curSum > sum)
            ahead --;
        else
            behind ++;
    }

    return c;
}
int main(){
    int t,m,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		int arr[n];      
	
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		sort(arr,arr+n);
		cout<<findPair(arr,n,m)<<endl<<endl;
	}
}
		
			
