struct request{
	char msg[1000];
	char method[100];
	char version[100];
	char browser[100];
};

struct response{
	char msg[1000];
	char method[100];
	char server[100];
	char datemodified[100];
};
