%{
#include <stdlib.h>
void yyerror(char *);
#include "y.tab.h"
%}
%%
[a-z]	{	return VAR;	}
[\*]	{	return MUL;	}
[\/]	{	return DIV;	}
[\+]	{	return ADD;	}
[\-]	{	return SUB;	}
[=]	{	return EQ;	}
. ;
%%
int yywrap(void) {
return 1;
}

