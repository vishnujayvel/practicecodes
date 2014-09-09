alpha	[A-Za-z]
digit	[0-9]
us	"_"
var	({alpha}|{us})({alpha}*{digit}*{us}*)
datat	"int"|"char"|"void"|"short"|"long"|"float"|"double"
%{
	char datatype[][10]={"void","short","char","int","long","float","double"};
	char identifier[10][10];
	int id_index=0,i,flag;
%}
%%
{datat}	{for(i=0;i<7;i++)
	{
		if(strcmp(yytext,datatype[i])==0)
		{	
			printf("TYPE%d",i);
			break;
		}
	}
	}
	
{var}	{flag=0;
	while(i<=id_index)
	{
	flag=strcmp(identifier[i],yytext);
	if(flag==0)
	{
		printf("ID%d",i);
		break;
	}
	}
	if(flag!=0)
	{
		id_index++;
		i=0;
		while(i<strlen(yytext))
		identifier[id_index]=yytext[i];
		printf("ID%d",id_index);
	}
	}
%%
int yywarp(){return 1;}
int main()
{
	yylex();
	return 0;
}
	
