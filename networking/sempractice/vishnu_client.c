#include<sys/socket.h>
#include<sys/types.h>
#include<arpa/inet.h>
#include<stdio.h>
#include<string.h>

int main(){
      int sockfd;
     char msg[100];
    struct sockaddr_in server;
    socklen_t addrsize;
    if((sockfd=socket(AF_INET,SOCK_DGRAM,0))==-1){
     printf("Socket error");
    exit(1);
   }
   server.sin_family=AF_INET;
   server.sin_port=3089;
   server.sin_addr.s_addr=inet_addr("127.0.0.1");
   addrsize=sizeof(server);
   printf("\nenter the domain name\n");
   gets(msg);
   sendto(sockfd,msg,strlen(msg)+1,0,&server,addrsize);
   recvfrom(sockfd,msg,sizeof(msg),0,&server,addrsize);
   printf("From server : %s\n",msg);
  close(sockfd);
 }
