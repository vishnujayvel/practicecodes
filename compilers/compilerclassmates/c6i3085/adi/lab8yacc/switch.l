Nline [\n]
Tabl [\t]
%{
	#include<stdlib.h>
	#include<stdio.h>
	void yyerror(char);
	#include "y.tab.h";
%}
%%
"switch"	{	return SWITCH;	}
"("	{	return OPBR;	}
")"	{	return CLBR;	}
"{"	{	return OCB;	}
"}"	{	return CCB;	}
";"	{	return SC;	}
"case"	{	return CASE;	}
"break"	{	return BREAK;	}
"default"	{	return DEFAULT;	}
[0-9]+	{	return DIGIT;	}
" "	{	return SP;	}
"printf"	{	return PRINTF;	}
[NLine]	{	return NL;	}
[Tabl]	{	return TAB;	}
[a-z]+ 	{	return ID;	}
"<="	{	return LE;	}
">="	{	return GE;	}
"=="	{	return EQ;	}
"!="	{	return NE;	}
">"	{	return GT;	}
"<"	{	return LT;	}
%%

