%{
#include<stdlib.h>
void yyerror(char *);
int yylval;
#include "y.tab.h"
%}

%%
[0-9]+  {
                yylval=atoi(yytext);
                return INTEGER;
        }
[-+\*\/]      {

                return *yytext;
        }
[ \t] ;
.       ;
%%

int yywrap(void)
{
return 0;
}

