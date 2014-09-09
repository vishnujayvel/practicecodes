%{
	#include "y.tab.h"
%}

%%

[0-9]+ return NUM;
[a-z][A-Z0-9]* return ID;
"switch" return SWITCH;
"case" return CASE;
"break" return BREAK;
"default" return DEF;
[\n] return 0;
.*    return OTHER;

%%
