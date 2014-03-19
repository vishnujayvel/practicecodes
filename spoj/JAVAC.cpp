#include<iostream>
#include<cstdio>
#include<string.h>
#include<ctype.h>
using namespace std;
char str[101];
int len;
int checkJava(){
	if(str[0]>='A'&&str[0]<='Z')
	 return 0;
	//int len=strlen(str);
	for(int i=0;i<len;i++)
	    if(str[i]=='_')
	      return 0;
	 
	 return 1;
 }
 
 int checkCpp(){
	 //int len=strlen(str);
	for(int i=0;i<len;i++)
	    if(str[i]>='A'&&str[i]<='Z')
	      return 0;
	      
			  if(str[0]=='_'||str[len-1]=='_')
	              return 0;
	    
	    return 1;
   }
   
	
int main(){
	while(1){
		char ans[300];
		if(scanf("%s",str)==EOF)
		  break;
		  len=strlen(str);
		int java=checkJava();
		int cpp=checkCpp();
		int f=1;
		if(java==1&&cpp==1)
		  printf("%s\n",str);
		else if(java==0&&cpp==0)
		  printf("Error!\n");
		else{
			if(java){
				int k=0;
				//cout<<"ITs jAVa!!";
				for(int i=0;i<len;i++){
					if(str[i]>='A'&&str[i]<='Z'){
						
					    ans[k++]='_';
					//    cout<<"ans["<<k-1<<"]="<<ans[k-1]<<endl;
					    ans[k++]=(char)(str[i]+32);
					  //  cout<<"ans["<<k-1<<"]="<<ans[k-1]<<endl;
					}
					else if(str[i]>='a'&&str[i]<='z'){
					  ans[k++]=str[i];
					  //cout<<"ans["<<k-1<<"]="<<ans[k-1]<<endl;
				  }
				}
					ans[k]='\0';
					//cout<<"ans["<<k<<"]="<<ans[k]<<endl;
					
				}
		  if(cpp)  {
			  int k=0;
	   
			  for(int i=0;i<len;i++){
				  if(str[i]=='_'){
				   i++;
				   if(str[i]=='_'){
				   	 //strcpy(ans,"Error");
				   	 f=0;
				   	 break;
				   }
				   else
				    ans[k++]=(char)(str[i]-32);
				}
				
				else if(str[i]>='a'&&str[i]<='z')
			  	
					ans[k++]=str[i];
			  
			  }
			  
			  ans[k]='\0';
		  }
		  if(f==1)
		  printf("%s\n",ans);
		  else
		  printf("Error!\n");
	  }
		  
		  
	  }
  }
  

			  
				   
		  
	  

