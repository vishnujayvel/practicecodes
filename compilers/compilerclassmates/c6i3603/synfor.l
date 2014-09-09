%{
#include<stdlib.h>
extern int yylval;
#include "y.tab.h"
%}
%%
for\( { yylval=*yytext;
	 return VARIABLE;}
%%
int yywrap(void)
{
return 1;
}

