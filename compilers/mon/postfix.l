%{
	#include "y.tab.h"
	extern int yylval;
%}
%%
[0-9]+ {
	yylval =atoi(yytext);
	return NUM;
	}
[-+*/] { return yytext[0];

}
[ \t] ;
. return OTHER;
\n return 0;

%%
