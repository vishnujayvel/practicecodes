%{
#include<stdlib.h>
#include "y.tab.h"
int yylval;
%}
relop "<"|">"|"<="|">="|"!="|"=="
logical "&&"|"||"
%%
"if" { yylval=*yytext;
     return IF;
      }
"else" {
        yylval=*yytext;
         return ELSE;
      }

[0-9]+ {
          yylval=atoi(yytext);
          return INT;
        }
[a-zA-Z]+ {
           yylval=*yytext;
          return VAR;
 }
[\{\}] return *yytext;
{relop} {
           yylval=*yytext;
           return RELOP;
         }
{logical} {
        yylval=*yytext;
         return LOGIC;
        }
[\(\)] {
         return *yytext;
        }
[ \t] ;
\n return *yytext;
.  ECHO;
%%
int yywrap(void)
{
  return 1;
}
