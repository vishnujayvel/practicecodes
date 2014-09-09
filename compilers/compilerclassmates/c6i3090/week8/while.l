%{
#include <stdlib.h>
#include<stdio.h>
void yyerror(char *);
#include "y.tab.h";
%}
%%
"while" {return WHILE;}
"("   {return OPBR;}
")"   { return CLBR;}
";"  { return SC;}
"1" { return SPL;}
"true"|"false" { return BOOL;}
"=="   { return EQ;}
"&&"|"||" { return MUL;}
">"|"<"|"<="|">="|"!=" { return RELOP;}
"++" { return INC;}
"--" { return DEC;}
[a-z]+  {return ID;}
[0-9]+ { return DIGIT;}
"{"   { return OCB;} //OpenCurlyBrackets
"}"  { return CCB;}
" "  { return SP; }
.  { yyerror(" Error!!");}
%%

