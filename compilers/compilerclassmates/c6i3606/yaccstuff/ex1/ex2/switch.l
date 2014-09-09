%{
	#include "y.tab.h"
        int switchfound=0;
%}
%%
switch  {       switchfound=1;
                return SWITCH;}
['<''>'](['='])?        {return RELOP;}
['=']['=']      {return RELOP;}
['(']   {return OB;}
[')']   {return CB;}
([0-9]) {return INT;}
[':']   {return COLON;}
case    {return CASE;}
default {return DEFAULT;}
([0-9a-zA-Z])+  {return COND;}
%%
int yywrap()
{
        return 1;
}

