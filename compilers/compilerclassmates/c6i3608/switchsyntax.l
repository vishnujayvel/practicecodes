%{
#include<stdlib.h>
void yyerror(char *);
int yylex(void);
extern int yyval;
#include "y.tab.h"
%}
%%
"switch" {return SW;}
"(" {return OB;}
")" {return CB;}
[a-z] {return ID;}
"case" {return CASE;}
":" {return C;}
";" {return SC;}
[0-9] {return DIGIT;}
"break" {return BREAK;}
"default" {return DEFAULT;}
%%
int yywrap()
{
	return 1;
}
