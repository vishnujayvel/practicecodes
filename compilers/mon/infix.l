%{
#include <stdlib.h>
//void yyerror(char *)
#include "y.tab.h"
extern int yylval;
%}

%%

[0-9]+ {
	yylval=atoi(yytext);
	return NUM;
	}
[ \t] ;
[-+*/()] { return yytext[0]; }
[\n] {return 0;}
. {return OTHER;}

