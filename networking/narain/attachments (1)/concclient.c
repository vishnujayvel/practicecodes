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
int main()
{
    int sockfd,connfd;
    char msg[50],response[50];
    char ch,c;
     memset(&ch,'0',sizeof(ch));
     memset(&c,'0',sizeof(c));
    int pid;
    int recvBytes,sentBytes;
    struct sockaddr_in serv_addr;
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_port=htons(MYPORT);
    serv_addr.sin_addr.s_addr=inet_addr("127.0.0.1");
    sockfd=socket(AF_INET,SOCK_STREAM,0);
    printf("Socket: %d\n",sockfd);
    connfd=connect(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr));
    printf("Connect: %d",connfd);
   while(1)
	{        
             recvBytes=recv(sockfd,&pid,sizeof(pid),0);
                    printf("Process-ID: %d\n",pid);
           	while(recv(sockfd,&c,1,0))
		    {                           			 
        			printf("%c",c);
        			if(c=='\n')
        			break;
           }
		 printf("Enter the message\n");
	   while(ch=getchar())
	   {
		//	printf("Character is: %c",ch);
			if(ch=='\n')
			{
				sentBytes=send(sockfd,&ch,1,0);
				break;
			}
			else
			{
				sentBytes=send(sockfd,&ch,1,0);
			}
	    }
		
	
		
		
	}
     
    return 0;
   
    
}
                    
    
    
