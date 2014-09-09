%{
//	#include "y.tab.h"
%}

relop "<"|"<="|">"|">="
logic "&&"|"||"

%%

"if"	{ /*return IF;*/ printf ("IF"); }
"else"	{ /*return ELSE;*/ printf("ELSE"); }
[0-9]+	{ /*return NUM;*/ printf("NUM"); }
[a-z][A-Z0-9]*	{ /*?return ID;*/ printf("ID"); }
{relop}	{ /*/return REL;*/ printf("REL"); }
{logic} { /*?return LOGIC;*/ printf("LOGIC"); }
[\n]	;//return 0;
.*	{ /*return *yytext;*/ printf("%s",*yytext); }
%%

int yywrap() {return 0;}
