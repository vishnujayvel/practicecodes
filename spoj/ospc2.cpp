#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		
	string str;
	int sand=-1,flag=0,done=0;
	cin>>str;
	int len=str.size();
	if(str[0]=='_'&&str[1]=='_'){
	    printf("1\n");
	    continue;
	}
	
	for(int i=1;i<len-1;i++){
		if(str[i]=='_'&&flag!=1){
			sand=i+1;
			flag=1;
		}
		 
		
		if(str[i-1]=='_'&&str[i+1]=='_'){
         if(str[i]=='_'){		
		 printf("%d\n",i+1);
		 done= 1;
	    }
	    
		}
      }
      if(done==0){
      if(str[len-1]=='_'&&str[len-2]=='_')
       printf("%d\n",len);
       else
       printf("%d\n",sand);
      }
   }
}
       
		 
