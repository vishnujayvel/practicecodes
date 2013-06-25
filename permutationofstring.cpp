#include<iostream>//refer the video
using namespace std;
void swap(char &a,char &b){
	char temp=a;
	a=b;
	b=temp;
}
void permute(char str[],int k,int n){
	if(k==n)
	   cout<<str<<endl;
   else{
   	     for(int i=k;i<=n;i++){
   	     	swap(str[k],str[i]);
   	     	permute(str,k+1,n);
   	     	swap(str[k],str[i]);
   	     }
   }
}
int main(){
	char str[]="abc";
	permute(str,0,2);
}
