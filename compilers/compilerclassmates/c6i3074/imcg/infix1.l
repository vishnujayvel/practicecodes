%{
#include<stdio.h>
#include "y.tab.h"
extern int yylval;
%}
ALPHA [a-zA-Z]
DIGIT [0-9]
%%
{ALPHA}({ALPHA}|{DIGIT})* return ID;
{DIGIT}+ return NUM;
[\n\t] yyterminate();
. return yytext[0];
%%
int yywrap()
{
return 1;
}

