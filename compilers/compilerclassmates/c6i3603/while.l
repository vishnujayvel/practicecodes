%{
	#include<stdio.h>
	#include "y.tab.h"
	void yyerror(char *);
%}
%%
"while" { return WHILE; }
"(" { return OPNPAR; }
")" { return CLOSEPAR; }
">"|"<"|"<="|">="|"!=" { return RELOP;}
"{" { return OPENBRACE; }
"}" { return CLOSEBRAC; }
"1" { return SPL; }
"=" { return EQ; }
"true"|"false" { return BOOL;}
[a-zA-Z]+ { return ID; }
[0-9]+ { return DIGIT; }
"&&"|"||" { return ADDRESS; }
. yyerror("error");
%%
int yywrap(void)
{
return 1;
}
