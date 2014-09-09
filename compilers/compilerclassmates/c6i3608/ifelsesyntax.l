%{
#include<stdlib.h>
void yyerror(char *);
int yylex(void);
extern int yyval;
#include "y.tab.h"
%}
%%
"if" {return IF;}
"else" {return ELSE;}
"else if" {return ELSEIF;}
"(" {return OB;}
")" {return CB;}
"<="|">="|"=="|"!="|"<"|">" {return OP;}
[a-zA-Z]+ {return ID;}
[0-9]+ {return DIGIT;}
%%
int yywrap()
{
	return 1;
}
