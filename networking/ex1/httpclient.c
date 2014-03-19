#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<arpa/inet.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<fcntl.h>
struct http
{
        char method[20],connection[20],fname[20],accept[20],fcontent[1000];
};

int main()
{
        int sockfd,numbytes;
        char recbuf[1000];
        struct sockaddr_in theiraddr;
//syntax : int socket(int domain, int type, int protocol);
/*The primary purpose of AF_INET was to allow for other possible network protocols or address families (AF is for address family; PF_INET is for the (IPv4) internet protocol family). For example, there probably are a few Netware SPX/IPX networks around still; there were other network systems like DECNet, StarLAN and SNA, not to mention the ill-begotten ISO OSI (Open Systems Interconnection), and these did not necessarily use the now ubiquitous IP address to identify the peer host in network connections.
*/
/*Stream Sockets (SOCK_STREAM)
Connection oriented
Rely on TCP to provide reliable two-way connected
communication
*/
/*
protocol can be set to 0 to
choose the proper protocol for the given type.
*/


        if((sockfd=socket(AF_INET,SOCK_STREAM,0))==-1)
        {
                printf("error in establishing socket!");
                exit(1);
        }
        theiraddr.sin_family=AF_INET;
        theiraddr.sin_port=htons(1234);
/*
INADDR_ANY is used when you don't need to bind a socket to a specific IP. When you use this value as the address when calling bind(), the socket accepts connections to all the IPs of the machine.
*/
        theiraddr.sin_addr.s_addr=inet_addr("127.0.0.1");
        memset(&(theiraddr.sin_zero),'\0',8);
//sin_zero is an array of 8 bytes.It should be intialized to '\0'
//int connect(int sockfd, struct sockaddr *serv_addr, int addrlen);

        if(connect(sockfd,(struct sockaddr*)&theiraddr,sizeof(struct sockaddr))==-1)
        {
                perror("error in connect");
                exit(1);
        }
 struct http req;
        printf("Enter the method (GET/POST):");
 scanf("%s",req.method);
 printf("Enter filename:");
 scanf("%s",req.fname);
 printf("Connection:");
 scanf("%s",req.connection);
 printf("Accept:");
 scanf("%s",req.accept);
 if(!strcmp(req.method,"POST"))
 {
   printf("Enter the data to be written:");
   //char ch=getchar();
   scanf("%s",req.fcontent);
 }
//int send(int sockfd, const void *msg, int len, int flags);
//set flags to 0

        if(send(sockfd,&req,sizeof(struct http),0)==-1)
        {
                perror("error in send");
                exit(1);
        }
//int recv(int sockfd, void *buf, int len, int flags);

 if((numbytes=recv(sockfd,recbuf,999,0))==-1)
 {
   perror("error in Recv");
   exit(1);
 }
 recbuf[numbytes]=0;
 printf("Contents received from Server: %s\n",recbuf);
 close(sockfd);
        return 0;
}
