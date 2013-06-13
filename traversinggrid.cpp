#include<iostream>
using namespace std;
int main(){
	int n,m,t;
	cin>>t;
	while(t--){
	
	cin>>n>>m;
	if(n%2==0&&m%2==0)
		  {
		  	if(n>m)
		  	    cout<<"U\n";
		  	    else if(n<=m)
		  	    cout<<"L\n";
		  }
   else if(n%2!=0&&m%2!=0){
   	    if(n>m)
   	       cout<<"D\n";
        else if(m>=n){
      	   cout<<"R\n";
        }
   }
   else {
   	 if(n%2==0){
   	 	if(n>m)
   	 	cout<<"D\n";
   	 	else
   	 	cout<<"L\n";
   	 }
   	 else{
   	  if(n>m) 
   	  cout<<"U\n";
   	  else
   	  cout<<"R\n";
   }
   }	
}
	}

