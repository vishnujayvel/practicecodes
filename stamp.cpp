#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t,i,num;
    int nofstamp,noffriend;
    cin>>t;
	for(int j=0;j<t;j++){
	
	cin>>nofstamp;
	cin>>noffriend;
	vector<int> slist;
	for(i=0;i<noffriend;i++){
		cin>>num;
		slist.push_back(num);
		
	}
	    sort(slist.begin(),slist.end());
	    bool flag=false;
	    int sum=0;
        int c=0;
	    for(i=noffriend-1;i>=0;i--){
	       sum+=slist[i];
           c++;
	       if(sum>=nofstamp){
	       	flag=true;
	       	break;
	       }
	    	
	    }
	    cout<<"Scenario #"<<j+1<<":\n";
	    if(flag)
	       cout<<c;
	    else
	      cout<<"impossible";
          if(i!=t-1)
          cout<<"\n\n";
	    
	}
}
	
	
	
	
	
    


