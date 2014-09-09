%{
	#include "y.tab.h"
	int extern yylval;
%}

%%
[0-9]+	{yylval=atoi(yytext);
		 return NUM;
		}
[-+*/]	{	return yytext[0];}
.	;
\n 	return 0;

%%
