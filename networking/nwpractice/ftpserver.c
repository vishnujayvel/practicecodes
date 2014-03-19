#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<strings.h>
#include<string.h>
main()
{
	struct sockaddr_in server,client,server1;
	int sockfd,sockcli,x;
	socklen_t size;
	FILE *fp;
	char msg[100],msg1[1000],file[100],cont[1000];
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	server.sin_family=AF_INET;
	server.sin_port=3089;
	server.sin_addr.s_addr=inet_addr("127.0.0.1");
	printf("\nBind=%d",bind(sockfd,(struct sockaddr*)&server,sizeof(server)));
	printf("\nListen=%d",listen(sockfd,10));
	size=sizeof(client);
	x=accept(sockfd,(struct sockaddr*)&client,&size);
	printf("\nAccept=%d",x);
	while(1)
	{
		bzero(&msg,sizeof(msg));
		recv(x,msg,sizeof(msg),0);
		printf("\n%s",msg);
		if(strcmp(msg,"q")!=0)
		{
			fp=popen(msg,"r");
			fread(msg1,1,1000,fp);
			printf("\n%s",msg1);
			fclose(fp);
			sockcli=socket(AF_INET,SOCK_STREAM,0);
			server1.sin_family=AF_INET;
			server1.sin_port=9999;
			server1.sin_addr.s_addr=inet_addr("127.0.0.1");
			printf("\nConnect=%d",connect(sockcli,(struct sockaddr*)&server1,sizeof(server1)));
			printf("\n%s\n",msg1);
			
			send(sockcli,msg1,sizeof(msg1),0);
			bzero(&msg1,sizeof(msg1));
			
		}
		else
		  break;
		  
		
	}
	close(x);
	close(sockfd);
}
