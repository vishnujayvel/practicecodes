#include<iostream>
using namespace std;
void negate1(char &x){
	x=(x=='1')?'0':'1';
}
int main(){
	string s;
	int ans=0;
	bool flip;
	while(cin>>s){
		flip=false;
		for(int i=0;i<s.size();i++){
			if(flip){
				negate1(s[i]);
			}
			if(s[i]=='1'){
			
			    negate1(s[i]);
			    flip=!flip;
			    ans++;
			}
		}
		cout<<ans;
	}
}
