%{
#include <stdlib.h>
void yyerror(char*);
int yylval;
#include "y.tab.h"
%}
%%

[a-z]+ {
	yylval = *yytext;
	return VARIABLE;
	}
[-+()/*\n] {return *yytext; }
[ \t] ;
. yyerror("INVALID");
%%
int yywrap(void) {
return 1;
}

