#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
char team1[2][100];
char team2[2][100];
void result(int a){
	if(a==1){
		printf("%s\\%s\n",team1[0],team1[1]);
	 }
	 else
	    printf("%s\\%s\n",team2[0],team2[1]);	   
}
int main(){
	   int t;
	   
	   long long int arr[3];
	   cin>>t;
	   while(t--){
		   long long int x;
		   long long int r;
		   for(int i=0;i<3;i++)
		   scanf("%lld",&arr[i]);
		   scanf("%s",team1[0]);
		   scanf("%s",team1[1]);
		   scanf("%s",team2[0]);
		   scanf("%s",team2[1]);
		   x=arr[0]^arr[1]^arr[2];
		   if(x==0){
			   result(2);
			   continue;
		   }
		   else{
		   	    int f=0;
			   for(int i=0;i<3;i++){
				     r=x^arr[i];
				     if(r<arr[i]){
						f=1;
						arr[i]=arr[i]-r;
						 x=arr[0]^arr[1]^arr[2];
						   if(x==0){
							   result(1);
							   break;
						   }
						 result(1);
						 break;
						 //continue;
					 }
					 
				 }
				 if(f==0)
				 result(2);
			 }
		 }
			 
			 
}
			 
		     
