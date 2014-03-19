#include<iostream>
using namespace std;

double sqrt(double num){
	double low=0;
	double high=num/2;
	double mid,temp;
	while(low<high){
		 mid=low+(high-low)/2;
		 temp=mid*mid;
		if(temp==num)
		    return mid;
		 else if(temp<num)
		    low=mid;
		 else 
		    high=mid;
		}
		return mid;
	}
	
	int main(){
		cout<<sqrt(25);
	}
	
