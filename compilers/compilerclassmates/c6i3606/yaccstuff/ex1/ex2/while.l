%{
	#include "y.tab.h"
	#include<stdio.h>
	#include<stdlib.h>
	void yyerror(char *);
%}
%%
"while" {return WHILE;}
"(" {return OB;}
")" {return CB;}
[a-z]+ {return ID;}
[0-9]+ {return NUM;}
"&&"|"||" {return LOG;}
"<"|">"|"<="|">="|"!=" {return RELOP;}
. {yyerror("Error!");}
%%
int yywrap()
{
	return 1;
}
