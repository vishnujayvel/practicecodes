%{
#include<y.tab.h>
%}
%%
"while" { return key; }
"(0|1)" { return zero; }
"(" { return ob; }
")" { return cb; }
" " { return sp; }
";" { return sc; }
"int"|"char"|"float" {return dec; }
"&&"|"||" {return tt; }
[a-z]+ {return vb; }
[0-9]+ { return nu; }
">"|"<"|">="|"<="|"="|"!=" {return op; }
"{" {return co;}
"}" {return cc;}
%%

