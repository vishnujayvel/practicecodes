#include<iostream>
#include<cstdio>
using namespace std;
int max(int a,int b){
	if(a>b)
	 return a;
	else
	 return b;
}
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

int main(){
	char arr;
	   
   int b1=0,b2=0,b3=0,stop=0;
   int strike[2]={1,2};
    for(;cin>>arr;){
		if(stop==0){
		if(strike[0]==1){
			if(arr=='O'){
				// strike[0]=strike[1];
				 strike[0]=max(strike[0],strike[1])+1;
				 if(strike[0]>3)
				    stop=1;
				 continue;
			 }
			 else if(arr=='W'){
				 continue;
			 }
			 else if(arr=='N'){
				 continue;
			 }
			 else if(arr>='0'&&arr<='6')
			    b1+=(int)(arr-'0');
			    swap(strike[0],strike[1]);
		 }
		 if(strike[0]==2){
			if(arr=='O'){
			//	 strike[0]=strike[1];
				 strike[0]=max(strike[0],strike[1])+1;
				 if(strike[0]>3)
				    stop=1;
				 continue;
			 }
			 else if(arr=='W'){
				 continue;
			 }
			 else if(arr=='N'){
				 continue;
			 }
			 else
			    b2+=(int)(arr-'0');
			    swap(strike[0],strike[1]);
		 }
		if(strike[0]==3){
			if(arr=='O'){
				 //strike[0]=strike[1];
				 strike[0]=max(strike[0],strike[1])+1;
				 if(strike[0]>3)
				    stop=1;
				 continue;
			 }
			 else if(arr=='W'){
				 continue;
			 }
			 else if(arr=='N'){
				 continue;
			 }
			 else
			    b3+=(int)(arr-'0');
			    swap(strike[0],strike[1]);
		 }
	 }
 }
	 cout<<b1<<" "<<b2<<" "<<b3<<endl;
		
		 
}
#include<iostream>
#include<cstdio>
using namespace std;
int max(int a,int b){
	if(a>b)
	 return a;
	else
	 return b;
}
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

int main(){
	char arr;
	   
   int b1=0,b2=0,b3=0,stop=0;
   int strike[2]={1,2};
    for(;cin>>arr;){
		if(stop==0){
		if(strike[0]==1){
			if(arr=='O'){
				// strike[0]=strike[1];
				 strike[0]=max(strike[0],strike[1])+1;
				 if(strike[0]>3)
				    stop=1;
				 continue;
			 }
			 else if(arr=='W'){
				 continue;
			 }
			 else if(arr=='N'){
				 continue;
			 }
			 else if(arr>='0'&&arr<='6')
			    b1+=(int)(arr-'0');
			    swap(strike[0],strike[1]);
		 }
		 if(strike[0]==2){
			if(arr=='O'){
			//	 strike[0]=strike[1];
				 strike[0]=max(strike[0],strike[1])+1;
				 if(strike[0]>3)
				    stop=1;
				 continue;
			 }
			 else if(arr=='W'){
				 continue;
			 }
			 else if(arr=='N'){
				 continue;
			 }
			 else
			    b2+=(int)(arr-'0');
			    swap(strike[0],strike[1]);
		 }
		if(strike[0]==3){
			if(arr=='O'){
				 //strike[0]=strike[1];
				 strike[0]=max(strike[0],strike[1])+1;
				 if(strike[0]>3)
				    stop=1;
				 continue;
			 }
			 else if(arr=='W'){
				 continue;
			 }
			 else if(arr=='N'){
				 continue;
			 }
			 else
			    b3+=(int)(arr-'0');
			    swap(strike[0],strike[1]);
		 }
	 }
 }
	 cout<<b1<<" "<<b2<<" "<<b3<<endl;
		
		 
}
