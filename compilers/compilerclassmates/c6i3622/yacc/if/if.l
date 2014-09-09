%{
#include"y.tab.h"
%}
ALPHA [A-Za-z]
DIGIT [0-9]
%%
[ \t\n]
if return IF;
else return ELSE;
{DIGIT}+ return NUM;
{ALPHA}+ return ID;
"<=" return LE;
">=" return GE;
"==" return EQ;
"!=" return NE;
"||" return OR;
"&&" return AND;
. return yytext[0];
%%

