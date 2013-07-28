#include<iostream>
#include<string.h>
using namespace std;

int denom[]={1,2,3};
char result[1000];
char tempsol[1000];
void findAllCombination(int startIndex,int target){
	for(int i=startIndex;i<3;i++){
		int temp=target-denom[i];
		strcat(tempsol,(char*)temp);
		if(temp<0){
			strcpy(tempsol," ");
			break;
		}
		if(temp==0){
			strcat(result,tempsol);
			strcpy(tempsol,"");
			break;
		}
		else{
			findAllCombination(i,temp);
          }
	  }
  }		
		
			
			
int main(){
	findAllCombination(0,4);
	cout<<result;
}
	
