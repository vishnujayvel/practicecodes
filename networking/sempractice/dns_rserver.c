#include<sys/socket.h>
#include<sys/types.h>
#include<arpa/inet.h>
#include<stdio.h>
#include<string.h>
int main(){
	int s,s1,addr_size,client_size,addr_size1;
	char domain[100],ip[100];
	struct sockaddr_in server,server1,client;
	server.sin_family=AF_INET;
	server.sin_port=3089;
	server.sin_addr.s_addr=inet_addr("127.0.0.1");
	s=socket(AF_INET,SOCK_DGRAM,0);
	bind(s,&server,sizeof(server));
	recvfrom(s,domain,sizeof(domain),0,(struct sockaddr_in*)&client,&client_size);
	printf("\n Received from client : %s\n",domain);
   	server1.sin_family=AF_INET;
	server1.sin_port=13089;
	server1.sin_addr.s_addr=inet_addr("127.0.0.1");
	s1=socket(AF_INET,SOCK_DGRAM,0);
	addr_size1=sizeof(server1);	
	sendto(s1,domain,sizeof(domain),0,(struct sockaddr_in*)&server1,sizeof(server1));
	
	printf("\n sent to auth server : %s\n ",domain);
	
	recvfrom(s1,ip,sizeof(ip),0,(struct sockaddr_in*)&server1,&addr_size1);
	
	
	printf("\n Msg from auth server : %s\n",ip);
	sendto(s,ip,sizeof(ip),0,(struct sockaddr_in*)&client,sizeof(client));
	
}

