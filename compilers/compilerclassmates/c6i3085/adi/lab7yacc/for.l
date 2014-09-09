%{
	#include <stdlib.h>
	#include<stdio.h>
	void yyerror(char *);
	#include "y.tab.h";
%}
%%
"for" {return FOR;}
"("   {return OPBR;}
")"   { return CLBR;}
";"  { return SC;}
"="   { return EQ;}
">"|"<"|"<="|">="|"!=" { return RELOP;}
"++" { return INC;}
"--" { return DEC;}
[a-z]+  {return ID;}
[0-9]+ { return DIGIT;}
"{"   { return OCB;}
"}"  { return CCB;}
" "  { return SP; }
.  { yyerror(" Error!!");}
%%

