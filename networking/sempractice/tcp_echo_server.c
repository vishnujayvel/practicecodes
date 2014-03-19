#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
       int sockfd,client_addrlen,acceptd;
       struct sockaddr_in server,client;
       char msg[100]="Hello client!!";
       char msg1[100];
       pid_t pid;
       server.sin_family=AF_INET;
       server.sin_port=3089;
       server.sin_addr.s_addr=inet_addr("127.0.0.1");
       sockfd=socket(AF_INET,SOCK_STREAM,0);
       printf("bind %d\n",bind(sockfd,(struct sockaddr_in*)&server,sizeof(server)));
       
		 printf("listen %d\n",listen(sockfd,10));
		 while(1){
     
		   acceptd=accept(sockfd,(struct sockaddr_in*)&client,&client_addrlen);
       if(fork()==0){
		   close(sockfd);  
		   pid=getpid();
       recv(acceptd,msg1,sizeof(msg1),0);
       printf("\nFrom client %d : %s",pid,msg1);
       printf("\n Enter msg \n");
       gets(msg);
       
       send(acceptd,msg,sizeof(msg),0);
       getchar();
     }
    close(acceptd);
     }
}
       
