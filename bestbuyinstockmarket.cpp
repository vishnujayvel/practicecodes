/*Say you have an array for which the ith element is the price of a given stock on day i.
If you were only permitted to buy one share of the stock and sell one share of the stock, design an algorithm 
to find the best times to buy and sell.
*/
#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		
		cin>>n;
		int a[n];
		int localmin,localmax;
		int profit=0;
		for(int i=0;i<n;i++)
		  cin>>a[i];
        int i=1;
		  while(i<n){
		  
   	if(a[i]<a[i+1])
       	     localmin=a[i];
       
       	if(a[i]>a[i-1])
       	    localmax=a[i];
       
       profit+=(localmax-localmin);
       i++;
       
		
		  }

	}
	
}
