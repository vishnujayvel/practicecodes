#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>

int main(){
	
	//int i;
	int s,client_size;
    char buf[100],buf1[100]="Hey client!!";
	//socklen_t namelen;
	struct sockaddr_in client,server;
	s=socket(AF_INET,SOCK_DGRAM,0);
	if(s==-1)
	printf("error");
	server.sin_family=AF_INET;
	server.sin_addr.s_addr=inet_addr("127.0.0.1");
	server.sin_port=3089;
	printf("bind=%d",bind(s,&server,sizeof(server)));
	//namelen=sizeof(server);
	client_size=sizeof(client);
	if(recvfrom(s,buf,sizeof(buf),0,(struct sockaddr*)&client,&client_size)<0)
	  printf("error!");
	printf("%s",buf);
	sendto(s,buf1,sizeof(buf1),0,(struct sockaddr*)&client,client_size);
	close(s);
}
