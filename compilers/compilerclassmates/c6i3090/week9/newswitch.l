alpha [A-Za-z]
digit [0-9]
%{
#include<stdlib.h>
#include<stdio.h>
void yyerror(char *);
#include "y.tab.h";
%}
%%
"default" {return DEFAULT;}
"break" {return BREAK;}
"switch" {return SWITCH;}
"case" {return CASE;}
"("   {return OPBR;}
")"   { return CLBR;}
"{"  {return OCB;}
"}" {return CCB;}
":"   {return COLON;}
[0-9]+  {return DIGIT;}
[a-z]+ {return ALPHA;}
"\n" {return NL;}
";" {return SC;}
{alpha}({alpha}|{digit})* {return ID;}
" "  {return SP;}
">"|"<"|"<="|">="|"!="  {return RELOP;}
"printf(.);"|"scanf(.);" { return PRINT;}
","|"%d"|"%s" {return PRINTID;}

%%


