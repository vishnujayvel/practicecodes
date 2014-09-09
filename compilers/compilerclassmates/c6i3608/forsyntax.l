%{
#include <stdlib.h>
void yyerror(char *);
int yylex(void);
extern int yylval;
#include "y.tab.h"
char p;
%}

%%

"for" { return FOR; }
"(" { return OB; }
")" { return CB; }
";" { return SC; }
" " { return SP; }
[a-z]+ { return ID; }
[0-9]+ { return DIGIT; }
"++" { return INC; }
"--" { return DEC; }
"=" { return EQ; }
">"|">="|"<="|"<" { return OP; }
.       { yyerror("ERROR\n"); }
%%

int yywrap()
{
        return 1;
}

