alpha [A-Za-z]
digit [0-9]

%%
[\t \n]
{digit}+ return NUM;
{alpha}({alpha}|{digit})* return ID;
if   return IF;
">=" return GE;
"<=" return LE;
"==" return EQ;
"!=" return NE;
"||" return OR;
"&&" return AND;
.    return yytext[0];

%% 
