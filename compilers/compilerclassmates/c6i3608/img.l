%{
#include <stdlib.h>
void yyerror(char *);
int yylex(void);
extern int yyval;
#include "y.tab.h"
char p;
%}
%%
[0-9]+ {return DIGIT;}
[+-*/] {return OP;}
%%
int yywrap()
{
	return 1;
}
