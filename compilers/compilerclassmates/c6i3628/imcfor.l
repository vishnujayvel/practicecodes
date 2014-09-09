alpha   [A-Za-z]
digit   [0-9]
%%
[ \t\n]
for     return FOR;
{alpha}({alpha}|{digit})* return ID;
{digit}+ return NUM;
"<="    return LE;
">="    return GE;
"=="    return EQ;
"!="    return NE;
"||"    return OR;
"&&"    return AND;
.       return yytext[0];
%%


