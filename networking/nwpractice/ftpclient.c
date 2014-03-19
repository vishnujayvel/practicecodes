#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>
#include<unistd.h>
main()

{
	struct sockaddr_in server,server1,client1;
	int sockfd,sockcli,x,c;
	socklen_t size;
	char msg[100],msg1[500],file[100];
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	server.sin_family=AF_INET;
	server.sin_port=3089;
	server.sin_addr.s_addr=inet_addr("127.0.0.1");
	c=connect(sockfd,(struct sockaddr*)&server,sizeof(server));
	while(1)
	{
		printf("\n enter the command: ");
		bzero(&msg,sizeof(msg));
		gets(msg);
		send(sockfd,msg,sizeof(msg),0);
		if(strcmp(msg,"q"))
		{
			sockcli=socket(AF_INET,SOCK_STREAM,0);
			server1.sin_family=AF_INET;
			server1.sin_port=9999;
			server1.sin_addr.s_addr=inet_addr("127.0.0.1");
			bind(sockcli,(struct sockaddr*)&server1,sizeof(server1));
			listen(sockcli,10);
			size=sizeof(client1);
			x=accept(sockcli,(struct sockaddr*)&client1,&size);
			//bzero(&msg1,sizeof(msg1));
			recv(x,msg1,sizeof(msg1),0);
			printf("%s\n",msg1);
		
			close(x);
			close(sockcli);
	}
	else
	  break;
	  
	}
	close(sockfd);
	return 0;
}
