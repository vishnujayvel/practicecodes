%{
%}
%%
"while" {return key;}
"(" {return ob;}
")" {return cb;}
" " {return sp;}
";" {return sc;}
"int"|"char"|"float" {return dec;}
"&&"|"||" {return tt;}
[a-z]+ {return vb;}
[0-9]+ {return nu;}
">"|"<"|">="|"<="|"="|"!=" {return op;}
"{" {return co;}
"}" {return cc;}
%%


