#include<stdio.h>
#include<sys/types.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<string.h>
int main(){
	int index=-1,i;
	int s,s1,client_size;
	struct sockaddr_in server,client;
	char domain[100],ip[100],dns[2][100],dns1[2][100];
	strcpy(dns[0],"facebook.com");
	strcpy(dns[1],"google.com");
	strcpy(dns1[0],"123.45.67.8");
	strcpy(dns1[1],"223.45.34.7");
	server.sin_family=AF_INET;
	server.sin_port=13089;
	server.sin_addr.s_addr=inet_addr("127.0.0.1");
	printf("\nAuth Server...");
	
	if((s=socket(AF_INET,SOCK_DGRAM,0))<0)
	printf("socket error");
	bind(s,&server,sizeof(server));
    recvfrom(s,domain,sizeof(domain),0,(struct sockaddr*)&client,&client_size);	
	for( i=0;i<2;i++){
		if(strcmp(dns[i],domain)==0)
		   index=i;
	   }
	  if(index!=-1){
		  strcpy(ip,dns1[index]);
	  }
	  else
	     strcpy(ip,"Notfound\n");
	sendto(s,ip,sizeof(ip),0,(struct sockaddr*)&client,sizeof(client));
	printf("Msg from client Domain %s\n",domain);
	printf("msg sent to client : %s\n",ip);
	close(s);

}	
