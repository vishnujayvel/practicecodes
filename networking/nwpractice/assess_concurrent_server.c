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
   pid_t pid;
	char buf[100],putm[100];
	struct sockaddr_in servaddr;
	servaddr.sin_family=AF_INET;
	servaddr.sin_port=3089;
	servaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	printf("Server...");
	bindd= bind(sockfd,(struct sockaddr*)&servaddr,sizeof(servaddr));
	listend= listen(sockfd,10);
	addrlen=sizeof(servaddr);
	while(1){
	acceptd= accept(sockfd,(struct sockaddr*)&servaddr,&addrlen);
	if(fork()!=-1){
	//printf("bind %d listen %d accept %d",bindd,listend,acceptd);
	close(sockfd);
	recv(acceptd,buf,sizeof(buf),0);
	if(strcmp(buf,"q")==0)
	  break;
	  pid=getpid();
	  printf("client %d : %s\n",pid,buf); 
	  gets(putm);  
	  send(acceptd,putm,strlen(putm)+1,0);
      printf("server : %s\n",putm);
    }
    close(acceptd);
 }
}
