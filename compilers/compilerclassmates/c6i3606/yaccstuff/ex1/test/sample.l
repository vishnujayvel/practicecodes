%{
	#include "y.tab.h"
	#include<parser.h>
	#include<math.h>
	#define NAME
	#define NUMBER
%}
%%
([0-9])+|([0-9]*\.[0-9]+)([eE][-+]?[0-9]+)?	{
	yylval.dval=atof(yytext);
	return NUMBER;
}
[ \t] 	;
[A-Za-z][A-Za-z0-9]?*	{
	yylval.symp=symlook(yytext);
	return NAME;
}
"$"	{ return 0; }
\n|"="|"+"|"-"|"*"|"/"	{
	return yytext[0];
}
%%
int main()
{
	yylex();
	return 0;
}
