%{
#include<stdlib.h>
int yylval;
#include "y.tab.h"
%}
relop "<"|">"|"<="|">="|"!="|"=="
%%
"while" {
        yylval=*yytext;
        return W;
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

