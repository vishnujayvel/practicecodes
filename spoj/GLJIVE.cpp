#include<iostream>
using namespace std;

int main(){
	int n;
	int prevsum=0,currsum=0;
	for(int i=0;i<10;i++){
		cin>>n;
		prevsum=currsum;
		currsum+=n;
		if((100-prevsum)<(currsum-100)){
			currsum=prevsum;
			break;
		}
		  
		if(currsum>=100||currsum==prevsum)
		   break;
	  }
	  cout<<currsum;
  }

