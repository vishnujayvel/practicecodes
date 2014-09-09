%{
 #include "y.tab.h"
%}

relop "<"|">"|"<="|">="|"=="|"!="
logic "&&"|"||"
iden [a-z][a-zA-Z0-9]*
num [0-9]+

%%
"while" { return KEY;}
"(" { return OB; }
")" { return CB; }
"{" { return OCB; }
"}" { return CCB; }
{iden} { return ID; }
{num} {return NUM; }
{relop} {return RELOP; }
{logic} {return LOGIC; }
[ \t] ;
[\n] { return 0;}
%%

int yywrap(){
 return 1;
}

