%{
	int count=0;
	char str[30],i=0;
	#include<string.h>
	#include<ctype.h>
%}
alpha [a-zA-Z]
%%
{alpha}+ {for(i=0;i<yyleng;i++) {if(isupper(yytext[i])) printf("%c",tolower(yytext[i])); if(islower(yytext[i])) printf("%c",toupper(yytext[i]));}}
%%
main()
{
	yylex();
	printf("Count=%d",count);
}
