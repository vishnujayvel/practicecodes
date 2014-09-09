%{
	#include "y.tab.h"
	int extern yylval;
	int num;
%}

%%

[0-9]+	{
		yylval=atoi(yytext);
		return num;
	}
.	return yytext[0];
\n 	return 0;
%%
	
