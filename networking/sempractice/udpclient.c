#include<stdio.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<netinet/in.h>
int main(){
	int s,server_size;
	char buf[100],buf1[100]="Hey server!!!!!!!!!!!! :-)";
	struct sockaddr_in server;
	server.sin_family=AF_INET;
	server.sin_port=3089;
	server.sin_addr.s_addr=inet_addr("127.0.0.1");
	s=socket(AF_INET,SOCK_DGRAM,0);
	server_size=sizeof(server);
	sendto(s,buf1,sizeof(buf1),0,(struct sockaddr_in*)&server,server_size);
	recvfrom(s,buf,sizeof(buf),0,(struct sockaddr_in*)&server,server_size);
	printf("%s",buf);
}
