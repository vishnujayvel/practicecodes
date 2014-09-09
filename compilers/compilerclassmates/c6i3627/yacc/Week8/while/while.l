alpha	[A-Za-z]
digit	[0-9]
num	{digit}+
var	{alpha}({alpha}|{digit})*
comp	"=="|"<="|">="|">"|"<"|"!="|"<>"
%{
	#include <stdlib.h>
	#include "y.tab.h"
	extern int yyval;
	void yyerror(char *);
%}
%%
"while"	{return COMMAND;}
"("	{return OBRACKET;}
")"	{return CBRACKET;}
{var}	{return VAR;}
{comp}	{return COMP;}
{digit}	{return INTEGER;}
[\t ]	;
.	{yyerror("Syntax error\n");}
%%
int yywrap(){return 1;}

