%{
#include<stdlib.h>
#include<stdio.h>
#include "y.tab.h"
#define YYSTYPE char
extern YYSTYPE yylval;
%}

%%

[a-z]+ { yylval=*yytext;
	return VAR;
	}
[-+*/\n=] return *yytext;
[ \t] ;
. ;
%%

