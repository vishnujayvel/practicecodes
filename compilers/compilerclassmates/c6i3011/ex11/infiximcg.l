%{
	#include "y.tab.h"
	extern int yylval;
%}
%%
[a-z][A-Za-z0-9]* return ID;
[0-9]+        {
		yylval=atoi(yytext);
                return NUM;
              }
[ \n\t]         return 0;
.               return yytext[0];
%%

