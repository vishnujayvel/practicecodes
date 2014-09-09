%{
#include<stdio.h>
#include "y.tab.h"
void yyerror(char *s);
%}
%%
"switch" { return SWITCH; }
"case" { return CASE; }
"default" { return DEFAULT; }
"break" { return BREAK; }
[a-zA-z]+ { return ID; }
[0-9]+ { return DIGIT; }
";" { return SEMI; }
"'" { return QUOTES; }
"(" { return OPENPAR; }
")" { return CLOSEPAR; }
"{" { return OPENBR; }
"}" { return CLOSEBR; }
":" { return COLON; }
. yyerror("error");
%%
int yywrap(void)
{
return 1;
}
