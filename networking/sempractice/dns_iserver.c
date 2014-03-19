#include<stdio.h>
#include<sys/types.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<sys/socket.h>
int main(){
	int s,s1,client_size;
	struct sockaddr_in server,client;
	char domain[100],authip[100]="127.0.0.1",ip[100];
	server.sin_family=AF_INET;
	server.sin_port=3089;
	server.sin_addr.s_addr=inet_addr("127.0.0.1");
	printf("dns server...\n");
	if((s=socket(AF_INET,SOCK_DGRAM,0))<0)
	printf("socket error");
	bind(s,&server,sizeof(server));
    recvfrom(s,domain,sizeof(domain),0,(struct sockaddr*)&client,&client_size);	
	
	sendto(s,authip,sizeof(authip),0,(struct sockaddr*)&client,client_size);
	printf("Msg from client Domain %s\n",domain);
	printf("msg sent to client : %s\n",authip);

}	
