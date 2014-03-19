#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<strings.h>
#include<string.h>
int main(){
	FILE *fp;
	socklen_t addrlen;
	struct sockaddr_in servaddr,serv_cli;
	servaddr.sin_family=AF_INET;
	servaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	servaddr.sin_port=3089;
	int sockfd,acceptd,clifd;
	char command[100],result[1000];
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	printf("\nBind: %d\n",bind(sockfd,(struct sockaddr*)&servaddr,sizeof(servaddr)));
    addrlen=sizeof(servaddr);
    
    
	
    while(1){
		printf("\nlisten :%d\n",listen(sockfd,1));
		acceptd=accept(sockfd,(struct sockaddr*)&servaddr,&addrlen);
	    recv(acceptd,command,sizeof(command),0);
	if(strcmp(command,"q")){
		fp=popen(command,"r");
		fread(result,1,1000,fp);
		fclose(fp);
		
		clifd=socket(AF_INET,SOCK_STREAM,0);
		serv_cli.sin_port=3033;
		serv_cli.sin_family=AF_INET;
		serv_cli.sin_addr.s_addr=inet_addr("127.0.0.1");
		
		connect(clifd,(struct sockaddr*)&serv_cli,sizeof(serv_cli));
		send(clifd,result,strlen(result)+1,0);
	}
	else
	  break;
    
    }
    close(serv_cli);
   
    
}

	
