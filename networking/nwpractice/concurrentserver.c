
#include <stdio.h>
#include <sys/types.h>

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	 int sockfd,newsockfd;
	 socklen_t clilen;
	 struct sockaddr_in cli_addr,serv_addr;
	 int i;
	 char buf[100];
	 if((sockfd=socket(AF_INET,SOCK_STREAM,0))<0)
	      printf("error");
	      
	  serv_addr.sin_family=AF_INET;
	  serv_addr.sin_addr.s_addr=INADDR_ANY;
	  serv_addr.sin_port=htons(6000);
	  if(bind(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr))<0)
	     printf("error");
	  listen(sockfd,5);
	  while(1){
		  clilen=sizeof(cli_addr);
		  newsockfd=accept(sockfd,(struct sockaddr*)&cli_addr,&clilen);
		  if(newsockfd<0)
		    printf("error in accept");
		  
		  if(fork()==0){
			  close(sockfd);
			  strcpy(buf,"hello client!!");
			  send(newsockfd,buf,strlen(buf)+1,0);
			  memset(buf,'\0',sizeof(buf));
			  recv(newsockfd,buf,100,0);
			  printf("%s\n",buf);
			  close(newsockfd);
			  exit(0);
		  }
		  close(newsockfd);
	  }
  }
