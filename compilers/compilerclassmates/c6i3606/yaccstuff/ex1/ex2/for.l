%{
	#include "y.tab.h"
	#include<stdio.h>
	#include<stdlib.h>
	void yyerror(char *);
%}
%%
"for" {return FOR;}
"(" {return OB;}
")" {return CB;}
";" {return SC;}
[a-z]+ {return ID;}
[0-9]+ {return NUM;}
"=" {return EQ;}
"++" {return INC;}
"--" {return DEC;}
"<"|">"|"<="|">="|"!=" {return RELOP;}
. {yyerror("Error!");}
%%
