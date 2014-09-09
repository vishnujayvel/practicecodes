%{
#include<stdlib.h>
int yylval;
#include "y.tab.h"
%}
relop "<"|">"|"<="|">="|"!="|"=="|"="
%%
"for" {
        yylval=*yytext; 
        return F;
        }
[0-9]+ {
        yylval=atoi(yytext);
        return INTEGER;
       }
[a-zA-Z]+ {   
             yylval=*yytext;
              return VAR;
           }
[\(\)]  return *yytext;
; return *yytext;
[-+*/] return *yytext;
{relop} {     
           yylval=*yytext;
           return RELOP;}
\n return *yytext;
[ \t] ; 
. ECHO;
%%
int yywrap(void)
{
  return 1;
}
