digit	[0-9]
number	{digit}+
math	"+"|"-"|"*"|"/"|"\n"
%{
	#include <stdlib.h>
	#include "y.tab.h"
	extern int yylval;
	void yyerror(char *);
%}
%%
{number} {yylval=atoi(yytext);
	 return INTEGER;}
{math}	{return *yytext;}
[\t ]	;
.	{yyerror("invalid character.");}
%%
int yywrap(){return 1;}
