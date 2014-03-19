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
       char msg[100]="Hello server!!";
       char msg1[100];
       server.sin_family=AF_INET;
       server.sin_port=3089;
       server.sin_addr.s_addr=inet_addr("127.0.0.1");
       while(1){
       sockfd=socket(AF_INET,SOCK_STREAM,0);
       //printf("bind %d\n",bind(sockfd,(struct sockaddr_in*)&server,sizeof(server)));
       //printf("listen %d\n",listen(sockfd,1));
       connect(sockfd,(struct sockaddr_in*)&server,sizeof(server));
       printf("Enter msg\n");
       scanf("%s",msg);
        send(sockfd,msg,sizeof(msg),0);
       recv(sockfd,msg1,sizeof(msg1),0);
       printf("\nFrom server %s",msg1);
       fflush(stdin);
       getchar();
   }
}
       
