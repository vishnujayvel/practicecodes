%{
#include<stdio.h>
#include<string.h>
#include "y.tab.h"
%}

%%
[a-z][a-zA-Z]* {strcpy(yylval.var,yytext); return NAME; }
[+] { strcpy(yylval.var,yytext);	return PLUS; }
[=] {  strcpy(yylval.var,yytext); return EQUAL; }
[-] {strcpy(yylval.var,yytext); return MINUS; }
[\n\t] { return yytext[0]; }
%%
