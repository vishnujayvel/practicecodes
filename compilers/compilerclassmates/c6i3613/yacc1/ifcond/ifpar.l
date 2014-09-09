%{
#include<stdlib.h>
int yylval;
#include"y.tab.h"
%}
relop	"=="|"<="|">="|"<"|">"|"&&"|"!="
%%
(if)	{
		yylval=*yytext;
		return IF;
	}
(else)	{
		yylval=*yytext;
		return ELSE;
	}

{relop}	{
		yylval=*yytext;
		return RELOP;
	}
[0-9]+	{
		yylval=atoi(yytext);
		return INTEGER;
	}
[a-z]+	{
		yylval=*yytext;
		return VARIABLE;
	}
[\(\);]	{
		return *yytext;
	}
.	{
		yylval=*yytext;
	
	}
\n	return *yytext;

%%

