%{
#include<stdio.h>
extern int yylval;
int yyerror(char *);
#include"y.tab.h"
%}
%%
[0-9]+ { yylval=atoi(yytext); return INTEGER; }
[-+*/] { return *yytext; }
[ \t] ;
.  yyerror("Error");
%%
int yywrap(void)
{
return 1;
}
