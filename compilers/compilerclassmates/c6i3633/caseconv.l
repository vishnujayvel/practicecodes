
lower [a-z]
caps [A-Z]
space [ \t\n]
%%
{lower} {printf("%c",yytext[0]-32);}
{caps} {printf("%c",yytext[0]+32);}
{space} ECHO;
. 	ECHO;
%%

int yywrap()
{
	return 1;
}
main()
{
	yylex();
}

