%{
#include <stdlib.h>
void yyerror(char *);
int yylex(void);
char *d;
int f = 0;
extern int yylval;
#include "y.tab.h"
char p;
%}

%%

[0-9]+ {
                yylval = atoi(yytext);
                return INTEGER;
        }

[-+*\n] {       f = 0;return *yytext; }
"/"     {
          f = 1;
          return *yytext;       }
[ \t]   f = 0;
.       { f = 0; yyerror("error"); }

%%

int yywrap()
{
        return 1;
}

