#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>
int main(){
	int s,s1,acceptd,client_size;
	char result[100000],command[100];
	struct sockaddr_in server,server1,client;
	FILE *fp;
	server.sin_family=AF_INET;
	server.sin_addr.s_addr=inet_addr("127.0.0.1");
	server.sin_port=3089;
	s=socket(AF_INET,SOCK_STREAM,0);
	printf("Bind = %d\n",bind(s,(struct sockaddr_in*)&server,sizeof(server)));
	listen(s,10);
	
         acceptd=accept(s,(struct sockaddr_in*)&client,&client_size);
	while(1){
         recv(acceptd,command,sizeof(command),0);
         if(strcmp(command,"q")!=0){
			 bzero(&result,sizeof(result));
           fp=popen(command,"r");
           fread(result,1,10000,fp);
           fclose(fp);
           printf("%s",result);
           server1.sin_family=AF_INET;
		   server1.sin_addr.s_addr=inet_addr("127.0.0.1");
		   server1.sin_port=13089;
		   s1=socket(AF_INET,SOCK_STREAM,0);
	       connect(s1,(struct sockaddr_in*)&server1,sizeof(server1));
	       send(s1,result,sizeof(result),0);
           
	   }
	   else
	   break;
   }
      close(s1);
      close(s);
}			 		
 
