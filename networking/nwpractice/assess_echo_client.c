#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>

int main(){
	int sockfd,connectd;
	char msg[100];
	struct sockaddr_in clientaddr;
	clientaddr.sin_family=AF_INET;
	clientaddr.sin_port=3089;
	clientaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	printf("Client....");
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	connectd=connect(sockfd,(struct sockaddr*)&clientaddr,sizeof(clientaddr));
	recv(sockfd,msg,sizeof(msg),0);
	 printf("%s",msg);
    strcpy(msg,"Hello server");
    send(sockfd,msg,strlen(msg)+1,0);
    
   
}
