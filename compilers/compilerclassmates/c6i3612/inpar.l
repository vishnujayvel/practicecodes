%{
#include <stdlib.h>
void yyerror(char*);
int yylval;
#include "y.tab.h"
%}
%%

[0-9]+ {
	yylval = atoi(yytext);
	return INTEGER;
	}
[-+()/*\n] {return *yytext; }
[ \t] ;
. yyerror("INVALID");
%%
int yywrap(void) {
return 1;
}

