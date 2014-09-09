%{
	#include"y.tab.h"
%}
%%
"if" {return IF;}
['(']([a-zA-Z0-9])* {return OB;}
([a-zA-Z0-9])*[')'] {return CB;}
['<''>''<=''>=''!='] {return RELOP;}
"else" return ELSE;
%%
int yywrap()
{
	return 1;
}
