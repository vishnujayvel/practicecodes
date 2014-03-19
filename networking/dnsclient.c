#include<stdio.h>
#include<stdlib.h>
#include<arpa/inet.h>
#include<sys/types.h>
#include<sys/socket.h>
#define MAX 100
struct msgDNS
{
        char name[MAX];
        char ip[MAX];
}object;
int main()
{
        int sockfd,numbytes;
        struct sockaddr_in server;
        if((sockfd=socket(AF_INET,SOCK_DGRAM,0))==-1)
        {
                printf("errorr");
                exit(1);
        }
        server.sin_family=AF_INET;
        server.sin_port = 40555;
        server.sin_addr.s_addr=INADDR_ANY;
        strcpy(object.name, "www.facebook.com");
//      sendto(sockfd,&object,sizeof(object),0,&server,sizeof(server));
        sendto(sockfd,&object,sizeof(object),0,&server,sizeof(server));

        recvfrom(sockfd, &object, sizeof(object), 0, &server, sizeof(server));

        printf("%s : %s\n", object.name, object.ip);
close(sockfd);
}
