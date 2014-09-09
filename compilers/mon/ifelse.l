%{
	#include "y.tab.h"
%}

relop "<"|">="|">"|">="
logic "&&"|"||"

%%

"if" { return IF; }
"else" { return ELSE; }
[0-9]+ { return NUM; }
[a-z][A-Z0-9]* { return ID; }
{relop} { return REL; }
{logic} { return LOGIC; }
[\n] ;
.* { return *yytext; }
%%

int yywrap() {
 return 0; 
}

