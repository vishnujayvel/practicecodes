%{
	#include<stdio.h>
        #include "y.tab.h"
%}
%%
[a-zA-Z][a-zA-Z]*[0-9]* { strcpy(yylval.var,yytext);return NAME; }
[=] { strcpy(yylval.var,yytext); return EQUAL; }
[+] { strcpy(yylval.var,yytext); return PLUS; }
[-] { strcpy(yylval.var,yytext); return MINUS; }
[\n\t] { return yytext[0] ;}
%%

