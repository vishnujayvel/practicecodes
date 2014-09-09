%{
#include <stdlib.h>
#include<stdio.h>
void yyerror(char *);
#include "y.tab.h"
extern int yylval;
%}
%%

[a-z] {
	yylval = *yytext - 'a';
	return VARIABLE;
	}

[0-9]+ {
	yylval = atoi(yytext);

	return INTEGER;
	}

[-+()=/*\n] { return *yytext; }
"/0" 	{ yyerror("Divide by zero error");}

[ \t] ;
. yyerror("syntax error:");
%%
int yywrap(void) {
return 1;
}
