
#include <stdio.h>
#include <sys/types.h>

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	int sockfd,bindd,listend,acceptd;
	socklen_t addrlen;
	FILE *fp;
	char c[2];
	char buf[100]="Hello client";
	struct sockaddr_in servaddr;
	servaddr.sin_family=AF_INET;
	servaddr.sin_port=3089;
	servaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	printf("Server...");
	bindd= bind(sockfd,(struct sockaddr*)&servaddr,sizeof(servaddr));
	listend= listen(sockfd,1);
	addrlen=sizeof(servaddr);
	acceptd= accept(sockfd,(struct sockaddr*)&servaddr,&addrlen);
	printf("bind %d listen %d accept %d",bindd,listend,acceptd);
	
	recv(acceptd,buf,sizeof(buf),0);
	printf("\n file name : %s",buf);
	fp=fopen(buf,"r");
	while((c[0]=fgetc(fp))!=EOF)
	  send(acceptd,c,1,0);
     printf("File transferred");
}
