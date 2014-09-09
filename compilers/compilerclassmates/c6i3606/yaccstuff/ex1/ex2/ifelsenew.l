%{
	#include"y.tab.h"
%}
rel "<"|">"|"<="|">="|"=="|"!="
%%
"if" return IF;
"(" return OB;
[a-z]([a-z0-9])* return ID;
rel return RELOP;
")" return CB;
"{" return OFB;
"}" return CFB;
"\n" return NL;
"else" return ELSE;
" " return OTHER;
%%
int yywrap()
{
	return 1;
}
