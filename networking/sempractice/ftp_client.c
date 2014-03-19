#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>
int main(){
	
	
		int s,s1,acceptd,client_len;
	struct sockaddr_in server,server1,client;
	char command[100];
	char result[100000];
	while(1){
		server.sin_family=AF_INET;
	server.sin_addr.s_addr=inet_addr("127.0.0.1");
	server.sin_port=3089;
	s=socket(AF_INET,SOCK_STREAM,0);
	connect(s,(struct sockaddr_in*)&server,sizeof(server));
	printf("Enter the command : ");
	gets(command);
	send(s,command,sizeof(command),0);
	server1.sin_family=AF_INET;
	server1.sin_addr.s_addr=inet_addr("127.0.0.1");
	server1.sin_port=13089;
	s1=socket(AF_INET,SOCK_STREAM,0);
	printf("\bbind : %d",bind(s1,(struct sockaddr_in*)&server1,sizeof(server1)));
	listen(s1,1);
	acceptd=accept(s1,(struct sockaddr_in*)&client,&client_len);
	recv(acceptd,result,sizeof(result),0);
	printf("%s\n",result);
	}
}
