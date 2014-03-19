#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#define MAX 100
#define PORT 40555
int main()
{
int i;
int sockint, s,client_address_size;
socklen_t namelen;
struct sockaddr_in client, server;
char buf[100];
char buf1[100]="Hey UDP client";
/* create datagram socket using UDP */
printf("Creating datagram socket.\n");
s = socket(AF_INET, SOCK_DGRAM, 0);
if( s == -1 )
printf("Socket was not created.\n");
else
printf("Socket created successfully.\n");
/* set up the server name */
server.sin_family = AF_INET;
server.sin_port =3089; /* use first available port number */
server.sin_addr.s_addr = inet_addr("127.0.0.1");

if( bind(s, &server, sizeof( server )) < 0 ) {
printf("Error binding server.\n");
exit(3);
}
/* find out what port was assigned */
namelen = sizeof( server );
printf("The assigned port is %d\n", ntohs( server.sin_port));
/* receive message on socket s in buf */
client_address_size = sizeof(client);
printf("Waiting for a message to arrive.\n");
if( recvfrom(s, &buf, sizeof(buf), 0, (struct sockaddr *) &client,&client_address_size) < 0 )
{
printf("error in recvfrom()\n");
//exit(4);
}
printf("Data has been sent to the socket\n");
printf("The message was\n");
printf("%s\n",buf);
sendto(s, buf1, sizeof(buf1),0,(struct sockaddr*)&client, sizeof(client));

printf("Closing the socket connection.\n");


close(s);

return 0;
}


