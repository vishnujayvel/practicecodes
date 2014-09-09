%{
#include<stdio.h>
#include<stdlib.h>
void yyerror(char *);
#include "y.tab.h"
%}

%%
(while) {return FLOAT;}
[0-9]+ {return INTEGER;}
[a-zA-Z]+ {return VARIABLE;}
"<"|">"|"<="|">="|"=="|"!=" {return RELOP;}
[\(\)] {return *yytext;}
[ \t] |
.	;
%%

int yywrap(void)
{
return 1;
}
