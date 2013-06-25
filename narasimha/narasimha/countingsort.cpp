#include "iostream"
#include "stdlib.h"
using namespace std;
int main(){
	int data[100];
	for(int i=0;i<100;i++)
		data[i]=100;

	data[0]=9;
	data[1]=12;
	data[2]=1;
	data[3]=0;
	data[4]=6;
	data[5]=32;
	data[6]=1;
	data[7]=11;
	data[8]=2;
	int countArr[100]={0};
	for(int i=0;i<=66;i++){
		countArr[data[i]]++;
	}
	for(int i=0;i<=66;i++){
		cout<<endl<<i<<"="<<countArr[i];
	}

	for(int i=0;i<=66;i++){

		int countI=countArr[i];
		while(countI>0){
			cout<<endl<<i;
			countI--;
		}

	}




	return 0;	
}