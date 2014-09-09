alpha [A-Za-z]
digit [0-9]
lol "if"
lol1 "elseif"
lol2 "else"
%%
{lol} return IF;
{lol1} return ELSEIF;
{lol2} return ELSE;
{digit}+ return NUM;
{alpha}({alpha}|{digit})* {return ID;}
">=" {return GE;}
"<=" {return LE;}
"==" {return EQ;}
"!=" {return NE;}
"||" {return OR;}
"&&" {return AND;}
.    {return yytext[0];}
%%
