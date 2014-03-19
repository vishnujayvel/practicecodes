#include <netinet/in.h>
#include "httpstruct.h"
#include "sys/types.h"
#include "sys/socket.h"
#include "stdio.h"
#include "string.h"
int main(){
	int sockfd,bindd,listend,connectd;
	struct request req;
	struct response res;
	socklen_t addrlen;
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	struct sockaddr_in clientaddr;
	clientaddr.sin_family=AF_INET;
	clientaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	clientaddr.sin_port=3089;
	strcpy(req.method,"post\0");
	printf("Enter the file name");
	scanf("%s",req.msg);
	strcpy(req.browser,"mozilla\0");
	strcpy(req.version,"1.1\0");
	printf("client...\n");
	connectd=connect(sockfd,(struct sockaddr*)&clientaddr,sizeof(clientaddr));
	send(sockfd,&req,sizeof(req),0);
	recv(sockfd,&res,sizeof(res),0);
	printf("\nmethod %s\n server %s \n msg %s",res.method,res.server,res.msg);
}
	
	
