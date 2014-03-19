#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<stdio.h>

int main(){
	int sockfd,connectd;
	char msg[100];
	char c[2];
	FILE* fp;
	struct sockaddr_in clientaddr;
	clientaddr.sin_family=AF_INET;
	clientaddr.sin_port=3089;
	clientaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	printf("Client....");
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	connectd=connect(sockfd,(struct sockaddr*)&clientaddr,sizeof(clientaddr));
	
    strcpy(msg,"hello.txt");
    send(sockfd,msg,strlen(msg)+1,0);
    fp=fopen("mynewfile.txt","w");
    
     while(read(sockfd,c,1)!=0)
       {
               fputc(c[0],fp);
       }
       
      
    printf("File written successfully\n");
       return 0;
}

