%{
#include"y.tab.h"
%}
%%
"for" { return keey;}
";" { return sm;}
"{[a-z]*}" { return contents;}
"([a-z]*" { return def;}
";[a-z]*" { return def_o;}
">"|"<"|">="|"<="|"!="|"==" { return op;}
")" { return clos;}
"++"|"--"|"+="|"-=" {return inc;}
return yytext[0];
%%
