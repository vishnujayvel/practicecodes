#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
	int t,n;
	string str;
	map<string,int> account;
	map<string,int>::iterator it;
	
	cin>>t;
	while(t--){
		for(cin>>n;n>0;n--){
			getline(cin,str);
			account[str]++;
		}
		for(it=account.begin();it!=account.end();it++){
			cout<<it->first<<' '<<it->second<<endl;
		}
		
		
		
		
	}
}


