#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<string.h>
#include<stdio.h>
void ftp()
{
     FILE *fp;
     char message[1000],c;
    int sockfd,listenfd,accfd,b;
    int flag=0;
    int i;
    int count;
    char filename[20]="temp.txt";
    struct sockaddr_in serv_addr;
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_port=htons(1090);
    serv_addr.sin_addr.s_addr=inet_addr("127.0.0.1");
    
    sockfd=socket(AF_INET,SOCK_STREAM,0);
    printf("C-Socket: %d\n",sockfd);
    b=bind(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr));
   	printf("C-Bind: %d\n",b);
	listenfd=listen(sockfd,3);
	printf("C-Listen: %d\n",listenfd);
	accfd=accept(sockfd,(struct sockaddr*)NULL,NULL);
    printf("C-Accept: %d\n",accfd);
    memset(message,'\0',sizeof(message));
     recv(accfd,message,strlen(message)+1,0);
       printf("%s",message);
      
    
	
 }
    
int main()
{
    char command[30],ch;
    
    int sockfd,connfd;
    int flag=0;
    
    struct sockaddr_in serv_addr;
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_port=htons(3090);
    serv_addr.sin_addr.s_addr=inet_addr("127.0.0.1");
    sockfd=socket(AF_INET,SOCK_STREAM,0);
    printf("Client Socket: %d\n",sockfd);
    connfd=connect(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr));
    printf("Client Connect: %d\n",connfd);
    printf("Enter Command ");
    while((ch=getchar()))
        {
                if(ch=='\n')
                {
                        send(sockfd,&ch,1,0);
                        break;
                }
                else
                {
                        send(sockfd,&ch,1,0);
                }
        }
    ftp();
}
   
 
 
