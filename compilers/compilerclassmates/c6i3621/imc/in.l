%{
#include <stdio.h>
#include<stdlib.h>

#include "y.tab.h"
#define YYSTYPE int
extern YYSTYPE yylval;

%}
%%
[a-z]+ {
yylval=*yytext;
return INTEGER;
}
[-+*/()\n] return *yytext;
[ \t] ; /* skip whitespace */
. yyerror("invalid character");
%%
int yywrap(void) {
return 1;
}

