#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		int f=0;
		long long int ans=1;
		cin>>n;
		int max[n];
		for(int i=0;i<n;i++)
		cin>>max[i];
		sort(max,max+n);
		for(int i=n-1;i>=0;i--){
			max[i]-=i;
			if(max[i]<1){
			  f=1;
			  break;
		  }
		  ans=(ans*max[i])%1000000007;
	  }
	   if(f)
	    cout<<"0\n";
	    else
	    cout<<ans<<endl;
	}
	cout<<"KILL BATMAN";
}
		  
