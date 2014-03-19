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
        FILE *fd1;
        
        int sockfd,newfd;
        char sendbuf[1000];
        struct sockaddr_in myaddr,theiraddr;
        int numbytes;
        socklen_t sin_size;
        if((sockfd=socket(AF_INET,SOCK_STREAM,0))==-1)
        {
                perror("socket");
                exit(1);
        }
        myaddr.sin_family=AF_INET;
        myaddr.sin_port=htons(1234);
        myaddr.sin_addr.s_addr=INADDR_ANY;
        memset(&(myaddr.sin_zero),'\0',8);
        //int bind(int sockfd, struct sockaddr *my_addr, int addrlen);

        if(bind(sockfd,(struct sockaddr*)&myaddr,sizeof(struct sockaddr))==-1)
        {
                perror("bind");
                exit(1);
        }
        //int listen(int sockfd, int backlog);

        if(listen(sockfd,10)==-1)
        {
                perror("listen");
                exit(1);
        }
        sin_size=sizeof(struct sockaddr_in);
        while(1)
 {
	 //int accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen);

 if((newfd=accept(sockfd,(struct sockaddr*)&theiraddr,&sin_size))==-1)
        {
                perror("accept");
                exit(1);
        }
 /*You call accept() and you tell it to get the pending
connection. It'll return to you a brand new socket file descriptor to use for this single connection! That's
right, suddenly you have two socket file descriptors for the price of one! The original one is still listening
for more new connections, and the newly created one is finally ready to send() and recv().
*/
 printf("Client Accepted!\n");
 pid_t pid=fork();
 if(pid==0)
 {
 struct http *req;
        req=(struct http*)malloc(sizeof (struct http*));
 if((numbytes=recv(newfd,req,999,0))==-1)
        {
                perror("Recv");
                exit(1);
        }
 printf("Method: %s\n",req->method);
 printf("Connection: %s\n",req->connection);
 printf("File Name: %s\n",req->fname);
 printf("Accept: %s\n",req->accept);
 if(!strcmp(req->method,"POST"))
 {
   fd1=fopen(req->fname,"w");
   printf("File: %s\n",req->fcontent);
   fwrite(req->fcontent,1,1000,fd1);
   strcpy(sendbuf,"Contents written successfully!");
 }
 else
 {
   fd1=fopen(req->fname,"r");
   int x=fread(sendbuf,1,1000,fd1);
   sendbuf[x]=0;
 }
 if(send(newfd,sendbuf,strlen(sendbuf)+1,0)==-1)
 {
   perror("send");
   exit(1);
 }
 close(newfd);
 }
 }
 close(sockfd);
 return 0;
}
