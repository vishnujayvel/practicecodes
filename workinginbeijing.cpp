#include<iostream>
int main(){
	int imp[100000];
	unsigned long long n,a,b,cost,interncost,flightcost;
	int t,z,i,d;
	cin>>t;
	for(z=1;z<=t;z++){
		cin>>n>>a>>b;
		cost=2*a+n*b;
		flightcost=2*a;
		for(i=0;i<n;i++){
			cin>>imp[i];		
		}
		for(i=1;i<n;i++){
			d=v[i]-v[i-1]-1;//no of days between 2 imp dates-1(for arriving one day prior to the imp date
			interncost=d*b;
			if(interncost<flightcost)
			    cost+=interncost;
			else
			cost+=flightcost;
					}
			cout << "Case #"<< z <<": "<< cost << '\n';
			
	}
	
}
