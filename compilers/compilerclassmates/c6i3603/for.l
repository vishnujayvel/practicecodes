%{
#include<stdlib.h>
#include "y.tab.h"
void yyerror(char *);
%}
%%
"for" { return FOR; }
"(" { return OPNPAR; }
")" { return CLOSEPAR; }
"{" { return OBRAC; }
"}" { return CLOSEBRAC; }
";" { return SEMI; }
"=" { return EQ; }
"," { return COMMA; }
"=="|"<="|">="|"<"|">" { return RELOP; }
[a-zA-Z]+ { return ID; }
[0-9]+ { return DIGIT; }
"++" {return INC;}
"--" {return DEC;}
%%
int yywrap(void)
{
return 1;
}
