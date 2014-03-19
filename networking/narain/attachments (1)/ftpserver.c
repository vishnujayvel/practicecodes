#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<string.h>
#include<stdio.h>
void ftp(char command[])
{
     FILE *fp;
     int sockfd,connfd;
     char ch;
     char message[1000];
   
     int count=0;
    char filename[20]="";
      strcat(filename,command);
      strcat(filename,"vishnu.txt");
     char redirect[100]=">";
     strcat(redirect,filename);
     strcat(command,redirect);
     struct sockaddr_in cli_addr;
     cli_addr.sin_family=AF_INET;
     cli_addr.sin_port=htons(1090);
     cli_addr.sin_addr.s_addr=inet_addr("127.0.0.1");
     sockfd=socket(AF_INET,SOCK_STREAM,0);
     printf("S-Client Socket: %d\n",sockfd);
     connfd=connect(sockfd,(struct sockaddr*)&cli_addr,sizeof(cli_addr));
     printf("S-Client Connect: %d\n",connfd);
     system(command);
   
     fp=fopen(filename,"r");
      while((ch=fgetc(fp))!=EOF)
    {
       message[count++]=ch;
    }
    message[count]='\0';
    printf("Size of file: %d\n content: %s",count,message);
    send(sockfd,message,strlen(message)+1,0);
    rewind(fp);
   /* while((ch=fgetc(fp))!=EOF)
    {
        send(sockfd,&ch,1,0);
    }*/
    close(sockfd);
 }
    
int main()
{
    char command[30],ch;
    
    int sockfd,listenfd,accfd,b;
    int flag=0;
   
    struct sockaddr_in serv_addr;
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_port=htons(3090);
    serv_addr.sin_addr.s_addr=inet_addr("127.0.0.1");
    
    sockfd=socket(AF_INET,SOCK_STREAM,0);
    printf("Socket: %d\n",sockfd);
    b=bind(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr));
   	printf("Bind: %d\n",b);
	listenfd=listen(sockfd,3);
	printf("Listen: %d\n",listenfd);
	while(1)
	{       
          
	        accfd=accept(sockfd,(struct sockaddr*)NULL,NULL);
	       
            printf("Accept: %d\n",accfd);
            while(1)
            {
                    recv(accfd,&ch,1,0);
                    
                    if(ch=='\n')
                    {
                                command[flag++]='\0';
                                break;
                    }
                    else
                    {
                                command[flag++]=ch;
                               
                    }
                    
            }
            printf("Command is: %s",command);
            ftp(command);
           
      }
 }
 
            
            
