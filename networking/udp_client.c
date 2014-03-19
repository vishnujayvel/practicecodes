#include<stdio.h>
#include<stdlib.h>
#include<arpa/inet.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<string.h>
#define MAX 100

int main()
{
        int sockfd;
         char msg[100]="Hey UDP server !!";
        struct sockaddr_in server;
        socklen_t addrsize;
        if((sockfd=socket(AF_INET,SOCK_DGRAM,0))==-1)
        {
                printf("errorr");
                exit(1);
        }
        server.sin_family=AF_INET;
        server.sin_port = 3089;
        server.sin_addr.s_addr=inet_addr("127.0.0.1");
        addrsize=sizeof(server);
        sendto(sockfd,msg,strlen(msg)+1,0,&server,addrsize);

        recvfrom(sockfd,msg, sizeof(msg),0,&server,addrsize);

        printf("From server :%s \n", msg);
close(sockfd);
}
