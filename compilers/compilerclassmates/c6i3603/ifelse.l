%{
#include<stdlib.h>
#include "y.tab.h"
void yyerror(char *);
%}
%%
"if" {return IF; }
"else" { return ELSE; }
"(" { return OPENPAR; }
")" { return CLOSEPAR; }
"{" { return OPNBR; }
"}" { return CLOSEBR; }
">"|"<"|"<="|">="|"=="|"!=" { return RELOP; }
"1" { return SPL; }
"true"|"false" { return BOOL; }
[a-zA-Z]+ { return ID; }
[0-9]+ { return DIGIT; }
"&&"|"||" { return ADDRESS; }
. yyerror("error");
%%
int yywrap(void)
{
return 1;
}
