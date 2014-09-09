%{
#include<stdlib.h>
#include "y.tab.h"
int yylval;
%}
relop "<"|">"|"<="|">="|"!="|"=="
logical "&&"|"||"
%%
"switch" { yylval=*yytext;
     return SWITCH;
      }
"case" {
        yylval=*yytext;
        return CASE;
        }
"break" {
          yylval=*yytext;
           return BREAK;
 }
"return" {
        yylval=*yytext;
           return RETURN;
}
"default" {
        yylval=*yytext;
       return DEFAULT;
}
[0-9]+ {
          yylval=atoi(yytext);
          return INT;
        }
[a-zA-Z]+ {
           yylval=*yytext;
          return VAR;
          }

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
[\{\}] return *yytext;
: return *yytext;
; return *yytext;
[ \t] ;
\n return *yytext;
.  ECHO;
%%
int yywrap(void)
{
  return 1;
}

