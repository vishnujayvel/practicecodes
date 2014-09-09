%{
int i=0,i;
%}
%%
[a-z]=[0-9]\;	ECHO;
while\(		printf("for(;");
[a-z][<|>][0-9]	printf("%s;",yytext);
.*\}		ECHO;
%%
main()
{
yylex();
}
