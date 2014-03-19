
int main(){
	 int sockfd,newsockfd;
	 socklen_t clilen;
	 struct sockaddr_in cli_addr,serv_addr;
	 int i;
	 char buf[100];
	 if((sockfd=socket(AF_INET,SOCK_STREAM,0))<0)
	      printf("error");
	      
	  serv_addr.sin_family=AF_INET;
	  serv_addr.sin_addr.s_addr=INADDR_ANY;
	  serv_addr.sin_port=htons(6000);
	  if(bind(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr))<0)
	     printf("error");
	  listen(sockfd,5);
	  while(1){
		  clilen=sizeof(cli_addr);
		  newsockfd=accept(
