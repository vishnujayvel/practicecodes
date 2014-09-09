%{
#include<stdlib.h>
int yylval;
#include"y.tab.h"
%}

%%
[a-z]+  {
                yylval=*yytext;
                return VARIABLE;
        }
[0-9]+  {
                yylval=atoi(yytext);
                return INTEGER;
        }
"-"|"+"|"*"|"/" {
                        yylval=*yytext;
                        return OPERATOR;
                }
\n              return *yytext;
.       {
                return *yytext;
        }

%%

