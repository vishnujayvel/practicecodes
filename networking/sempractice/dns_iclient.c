#include<stdio.h>
#include<sys/types.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<sys/socket.h>
int main(){
	int s,s1,server_size;
	struct sockaddr_in server,authserver;
	char domain[100],authip[100],ip[100];
	server.sin_family=AF_INET;
	server.sin_port=3089;
	server.sin_addr.s_addr=inet_addr("127.0.0.1");
	if((s=socket(AF_INET,SOCK_DGRAM,0))<0)
	printf("socket error");
	printf("Client...\nenter the domain name");
	
	scanf("%s",domain);
	server_size=sizeof(server);
	
    sendto(s,domain,sizeof(domain),0,(struct sockaddr_in*)&server,server_size);
    recvfrom(s,authip,sizeof(authip),0,(struct sockaddr_in*)&server,&server_size);	
	printf("Domain %s\n",domain);
	printf("msg from dnsserver %s\n",authip);
	close(s);
	s1=socket(AF_INET,SOCK_DGRAM,0);
    authserver.sin_family=AF_INET;
    authserver.sin_addr.s_addr=inet_addr(authip);
    authserver.sin_port=13089;
    server_size=sizeof(authserver);
    sendto(s1,domain,sizeof(domain),0,(struct sockaddr_in*)&authserver,server_size);
    recvfrom(s1,ip,sizeof(ip),0,(struct sockaddr_in*)&authserver,&server_size);
    printf("Msg from authserver %s\n",ip);
    close(s1);
}
