#include<stdlib.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<sys/socket.h>
int main(){
   int i;
    int sockint,s,client_address_size;
    socklen_t namelen;
    struct sockaddr_in client,server;
    char buf[100];
    char buf1[100];
      char table1[100][100]={"facebook.com","google.com","ibatch.com"};
      char table2[100][100]={"19.34.56.1","127.6.3.2","13.78.34.1"};
    s=socket(AF_INET,SOCK_DGRAM,0);
    server.sin_family=AF_INET;
    server.sin_port=13089;
     server.sin_addr.s_addr=inet_addr("127.0.0.1");
    if(bind(s,&server,sizeof(server))<0){
      printf("Error binding server");
      exit(3);
    }
    namelen=sizeof(server);
    client_address_size=sizeof(client);
    printf("waiting for msg to arrive\n");
recvfrom(s,&buf,sizeof(buf),0,(struct sockaddr*)&client,&client_address_size);
    printf("%s\n",buf);
     for( i=0;i<3;i++){
      if(strcmp(table1[i],buf)==0){
              strcpy(buf1,table2[i]);
         }
   }
   sendto(s,buf1,strlen(buf1)+1,0,(struct sockaddr*)&client,sizeof(client));
    printf("closing connection");
   close(s);
}
