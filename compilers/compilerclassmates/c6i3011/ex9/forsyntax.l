%{
	#include"y.tab.h"
%}

incr	"++"|"--"
oper	"+"|"-"
relop	"<"|">"|"<="|">="|"=="|"!="
logic	"&&"|"||"
iden	[a-z][a-zA-Z0-9]*
num	[0-9]+

%%

"for"	{ return KEY; }
"("	{ return OB; }
")"	{ return CB; }
"{"	{ return OCB; }
"}"	{ return CCB; }
";"	{ return SC; }
"="	{ return EQ; }
{incr}	{ return INCR; }
{oper}	{ return OPER; }
{iden}	{ return ID; }
{num}	{ return NUM; }
{relop}	{ return RELOP; }
{logic}	{ return LOGIC; }
[ \t]	;
[\n]	{ return 0; }
.	{ return OTHER; }

%%
int yywrap()
{
	return 1;
}
