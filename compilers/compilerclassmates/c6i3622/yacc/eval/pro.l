%{
#include"y.tab.h"
#define YYSTYPE int
extern YYSTYPE yylval;

extern YYSTYPE yyltype;
%}
DIGIT [0-9]

%%
{DIGIT} { yylval=atoi(yytext); return ID; }
[-+*/] return yytext[0];
. ;
\n ;
%%



