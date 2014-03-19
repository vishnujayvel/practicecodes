#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>
int main()
{


    struct sockaddr_in clientaddr,cli_server;
    int clientfd,serverfd,clifd;
    char command[100],msg[1000];
    socklen_t addrlen;
    clientaddr.sin_family=AF_INET;
    clientaddr.sin_port=3089;
    clientaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
    clientfd=socket(AF_INET,SOCK_STREAM,0);
    	
    connect(clientfd,(struct sockaddr*)&clientaddr,sizeof(clientaddr));
    while(1){
		printf("\nEnter Command:");
		gets(command);
		send(clientfd,command,strlen(command)+1,0);
		if(strcmp(command,"q")){
		cli_server.sin_port=3033;
	    cli_server.sin_family=AF_INET;
	    cli_server.sin_addr.s_addr=inet_addr("127.0.0.1");
	
		clifd=socket(AF_INET,SOCK_STREAM,0);
		printf("\nBind: %d\n",bind(clifd,(struct sockaddr*)&cli_server,sizeof(cli_server)));
        addrlen=sizeof(cli_server);
        printf("\nlisten :%d\n",listen(clifd,1));
         serverfd=accept(clifd,(struct sockaddr*)&cli_server,&addrlen);
    
		recv(serverfd,msg,sizeof(msg),0);
		printf("\n%s\n",msg);
		close(serverfd);
		close(clifd);
	}
	else
	   break;
	}
}
