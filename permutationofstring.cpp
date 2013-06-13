#include<iostream>
using namespace std;
char full_string[100];
void swap(char &a,char &b){
	char temp=a;
	a=b;
	b=temp;
}
void permute(char *str,int length){
	if(length==0)
	  cout<<full_string<<endl;
    else{
    	for(int i=0;i<length;i++){
    	
    	swap(str[0],str[i]);
    	permute(str+1,length-1);
    	swap(str[i],str[0]);
    	
    	
    }
    }
}

int main(){
	
	cin>>full_string;
	permute(full_string,3);
	
	
	
	
	
	
}
