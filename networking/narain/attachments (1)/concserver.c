#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#define BACKLOG 3
#define MYPORT 3090
void chat(int accfd,int pid)
{
     char ch,c;
     memset(&ch,'0',sizeof(ch));
     memset(&c,'0',sizeof(c));
    int sentBytes;
	int recvBytes;
	while(1)
	{
            sentBytes=send(accfd,&pid,sizeof(pid),0);  //sending child's pid to client
	    printf("Enter the message\n");
	    while(ch=getchar())
	    {
		//	printf("Character is: %c",ch);	
                send(accfd,&ch,1,0)	  ;
			if(ch=='\n')
				break;
		}		
			while(recv(accfd,&c,1,0))
		{
			printf("%c",c);
			if(c=='\n')
			break;			
		}   		
	}

 }
int main()
{
	struct sockaddr_in serv_addr;
	
	int sockfd=0,listenfd=0,b=0;
	int accfd;
	int pid,cpid;
	int i;

	memset(&serv_addr,'0',sizeof(serv_addr));	
	
	serv_addr.sin_family=AF_INET;
	serv_addr.sin_port=htons(MYPORT);
	serv_addr.sin_addr.s_addr=inet_addr("127.0.0.1");
	
	
	
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	printf("Socket: %d\n",sockfd);
	b=bind(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr));
	printf("Bind Value:%d\n",b);
	listenfd=listen(sockfd,BACKLOG);
	printf("Listen Value: %d\n",listenfd);
	
    for(i=0;i<BACKLOG;i++)
    {
                          accfd=accept(sockfd,(struct sockaddr*)NULL,NULL);
	                      printf("Accept Value: %d\n",accfd);
	                      if((pid=fork())==0)  //Child process
	                      {
                                               close(listenfd); //close child's listening .
                                               cpid=getpid();
                                               printf("Child's ID: %d\n",cpid);
                                               chat(accfd,cpid);
                                               close(accfd);
                                               exit(0);
                           }
                             else
                              {
                                                 close(accfd);
                                }
                                               
    }
	return 0;
}
		
	
