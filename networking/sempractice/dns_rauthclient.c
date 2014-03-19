#include<sys/socket.h>
#include<sys/types.h>
#include<arpa/inet.h>
#include<stdio.h>
#include<string.h>
int main(){
	int s,addr_size;
	char domain[100],ip[100];
	struct sockaddr_in server;
	server.sin_family=AF_INET;
	server.sin_port=3089;
	server.sin_addr.s_addr=inet_addr("127.0.0.1");
	s=socket(AF_INET,SOCK_DGRAM,0);
	printf("enter the domain name \n");
	scanf("%s",domain);
	addr_size=sizeof(server);
	sendto(s,domain,sizeof(domain),0,(struct sockaddr_in*)&server,addr_size);
	
	recvfrom(s,ip,sizeof(ip),0,(struct sockaddr_in*)&server,addr_size);
	printf("\n Msg from dns server : %s",ip);
}
