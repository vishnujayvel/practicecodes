#include <stdio.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){
	struct sockaddr_in serv_addr;
	int sockfd;
	char buf[100];
	
	if((sockfd=socket(AF_INET,SOCK_STREAM,0))<0){
		printf("error in socket");
	}
	serv_addr.sin_family=AF_INET;
	serv_addr.sin_addr.s_addr=inet_addr("127.0.0.1");
    serv_addr.sin_port=3089;
    if((connect(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr)))<0)
    printf("error in  connect");
     memset(buf,'\0',100);
    recv(sockfd,buf,strlen(buf)+1,0);
    printf("%s\n",buf);
    
    memset(buf,'\0',100);
    
    strcpy(buf,"hello server!!");
    send(sockfd,buf,strlen(buf)+1,0);
   
    close(sockfd);
    return 0;
}
