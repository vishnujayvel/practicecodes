%{
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void yyerror(char *);
#include "y.tab.h"
int yylval;
%}
%%
[0-9]+ {
          yylval=atoi(yytext);  
         return INTEGER;
        } 
[a-zA-Z]+ {
           yylval=*yytext;
             return VAR;
       } 
[-+()/*] {
             yylval=*yytext;
             return OP;
           } 
\n return *yytext;
[ \t] ;
. yyerror("invalid character");
%%
int yywrap(void)
{
  return 1;
}
