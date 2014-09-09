alpha	[a-zA-Z]
digit	[0-9]
number	{digit}+
var	{alpha}({alpha}|{digit})*
space	[\t ]
spaces	{space}*
comp	">"|"<"|">="|"<="|"=="|"!="|"<>"
math	"++"|"--"
all	.*
alln	({all}|"\n")*
%{
	#include <stdlib.h>
	#include "y.tab.h"
	extern int yyval;
	void yyerror(char *);
%}
%%
"for"	{return COMMAND;}
"("	{return OBRACKET;}
")"	{return CBRACKET;}
{var}	{return VAR;}
"="	{return EQ;}
{number} {return INTEGER;}
";"	{return DELIM;}
{comp}	{return COMP;}
{math}	{return INC;}
{spaces} ;
.	{yyerror("Syntax error");}
%%
int yywrap(){return 1;}
