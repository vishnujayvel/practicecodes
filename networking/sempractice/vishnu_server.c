
#include<stdlib.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<sys/socket.h>
int main(){
    int sockfd,sockint,s,client_address_size;
    socklen_t namelen,addrsize;
    struct sockaddr_in client,server,server1;
    char buf[100],buf1[100];
    s=socket(AF_INET,SOCK_DGRAM,0);
    server.sin_family=AF_INET;
    server.sin_port=3089;
    server.sin_addr.s_addr=inet_addr("127.0.0.1");
    if(bind(s,&server,sizeof(server))<0){
      printf("Error binding server");
      exit(3);
    }
    namelen=sizeof(server);
    client_address_size=sizeof(client);
    printf("waiting for msg to arrive\n");

 recvfrom(s,&buf,sizeof(buf),0,(struct sockaddr*)&client,&client_address_size);
    printf("domain name is %s\n",buf);

     if((sockfd=socket(AF_INET,SOCK_DGRAM,0))==-1){
     printf("Socket error");
     exit(1);
     }
     server1.sin_family=AF_INET;
     server1.sin_port=13089;
     server1.sin_addr.s_addr=inet_addr("127.0.0.1");
     addrsize=sizeof(server1);
     printf("\n Sending to the dnsauthoritative : %s",buf);
     sendto(sockfd,buf,strlen(buf)+1,0,&server1,addrsize);
     recvfrom(sockfd,buf1,sizeof(buf1),0,&server1,&addrsize);
     printf("Received from authoritative server %s",buf1);
   sendto(s,buf1,strlen(buf1)+1,0,(struct sockaddr*)&client,sizeof(client));
    printf("closing connection");
   close(s);
}
