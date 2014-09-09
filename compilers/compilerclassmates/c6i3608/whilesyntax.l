%{
#include<stdlib.h>
#include<stdio.h>
extern int yyval;
int yyerror(char *);
#include"y.tab.h"
%}
%%
"while" { return WHIL; }
">"|"<"|"<="|">="|"!="|"==" {return OP;}

%%
int yywrap(void)
{
return 1;
}
