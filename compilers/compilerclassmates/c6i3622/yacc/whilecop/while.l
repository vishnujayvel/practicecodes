%{
#include <stdlib.h>
void yyerror(char*);
#include "y.tab.h"

//int lp,rp,logi;
%}
%%
(while) {return FLOAT;}
[0-9]+ {return INTEGER;}
[a-zA-Z]+ {return VARIABLE;}
"<"|">"|"<="|">="|"=="|"!=" {return RELOP; }
\{(.|\n)*\} return body;
[\(\)]  {return *yytext;}

[ \t] |
.       ;
%%
int yywrap(void) {
return 1;
}

