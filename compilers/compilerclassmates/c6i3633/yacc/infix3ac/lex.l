opr "/"|"+"|"*"|"-"|"\n"
%{
#include<stdlib.h>
void yerror(char *);
#include "y.tab.h"
extern int yylval;
%}
%%
[0-9]+ {yylval=atoi(yytext);
	return INTEGER;
    }
{opr}  return *yytext;
[ \t] ;
. yyerror("invalid character");
%%
int yywrap(void)
{
	return 1;
}
