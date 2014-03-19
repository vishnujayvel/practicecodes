#include <netinet/in.h>
#include "httpstruct.h"
#include "sys/types.h"
#include "sys/socket.h"
#include "stdio.h"
#include "string.h"
#include "strings.h"
#include "arpa/inet.h"
int main(){
	int sockfd,bindd,listend,connfd,i=0;
	struct request req;
	FILE *fp;
	char c[2];
	struct response res;
	socklen_t addrlen;
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	struct sockaddr_in servaddr;
	servaddr.sin_family=AF_INET;
	servaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	servaddr.sin_port=3089;
	printf("Server...\n");
	bindd=bind(sockfd,(struct sockaddr*)&servaddr,sizeof(servaddr));
	while(1){
	listend=listen(sockfd,1);
	addrlen=sizeof(servaddr);
	connfd=accept(sockfd,(struct sockaddr*)&servaddr,&addrlen);
	recv(connfd,&req,sizeof(req),0);
	bzero(&res.msg,sizeof(res.msg));
	printf("\nmethod %s\n browser %s \n msg %s   yipeeee\n",req.method,req.browser,req.msg);
	fp=fopen(req.msg,"r");
	//while((c[0]=fgetc(fp))!=EOF)
	    //res.msg[i++]=c[0];
	    //res.msg[i]='\0';
	    //strcpy(res.msg,"vishnu");
	    fread(res.msg,1,1000,fp);
	strcpy(res.method,req.method);

	strcpy(res.server,"apache\0");
	strcpy(res.datemodified,"12344\0");
	send(connfd,&res,sizeof(res),0);
}
}
