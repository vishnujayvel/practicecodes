#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int t,n,i,k;
	string pnum;
	
	cin>>t;
	while(t--){
		vector<string> plist;
		cin>>n;
		  for(i=0;i<n;i++){
		  	
		  	cin>>pnum;
		  	plist.push_back(pnum);
		  }
		  	bool flag=false;
		  	
		  	sort(plist.begin(),plist.end());
		  	for(i=0;i<n-1;i++){
		  		int count=0;
		  		for(k=0;k<plist[i].size();k++){
		  			if(plist[i][k]==plist[i+1][k])
		  			     count++; 
		  		}
		  		if(count==plist[i].size()){
		  			
		  		      flag=true;
		  		      break;
		  		}
		  		}
		  		if(flag==true){
		  			cout<<"NO\n";
		  		
		  		}
		  		else{
		  			cout<<"YES\n";
		  		}
		  	}
		  	
		  	
		  }

	

