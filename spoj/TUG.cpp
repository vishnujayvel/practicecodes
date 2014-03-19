#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<climits>
using namespace std;

int n,arr[100001],solution[100001],min_diff,current[100001],sumRequired;
/*int calculateDiff(){
	int leftSum=0,rightSum=0;
	for(int i=0;i<n;i++){
		if(current[i])
		  leftSum+=arr[i];
		 else
		 rightSum+=arr[i];
	 }
		return (abs(leftSum-rightSum));
	}
*/
int tugofwar(){
	
}
			
		
        		
	
	
	


int main(){
	int t;
	memset(solution,0,sizeof(solution));
	memset(current,0,sizeof(current));
	
	scanf("%d",&t);
	while(t--){
		sumRequired=0;
		min_diff=INT_MAX;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
			sumRequired+=arr[i];
		}
		sumRequired/=2;
		
		if(tugofwar(0))
		  printf("\nYES");
		 else
		   printf("\nNO");
	   }
   }
			
	
