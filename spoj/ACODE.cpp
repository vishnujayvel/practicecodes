#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
/*hint :
1) Initialize an Array of Size N with 0 and element 0 as 1
2) Loop through all the elements
3) If it is a valid single digit number, Copy the previous element's value to the current element (DP[i] = DP[i-1])
4) If it is a valid two digit number, Add the previous to previous element's value to the current element (DP[i] += DP[i-2])

In one line : DP[i] = DP[i-1] {if valid single digit number} + DP[i-2] {if current and previous elements make a valid two digit number}
*/
int main(){
	
	char str[5001];
	unsigned long long  dp[5001];
	scanf("%s",str);
	while(strcmp(str,"0")){
		memset(dp,0,5001);
		dp[0]=1;
		int len=strlen(str);
		int n=0;
		for(int k=1;k<len;k++){
			n=(str[k-1]-'0')*10+(str[k]-'0');
			if(str[k]-'0')
			dp[k]=dp[k-1];
			if(n>9&&n<=26){
			  dp[k]+=dp[k-2>0?k-2:0];
			 }
		   }
		   printf("%llu\n",dp[len-1]);
		   
	   scanf("%s\n",str);
	   }
   }
