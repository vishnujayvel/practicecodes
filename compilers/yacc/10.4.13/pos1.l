DIGIT    [0-9]
%%
{DIGIT}+ {yylval=atoi(yytext);return T_Int;}
[-+*/] {return yytext[0];}
\n    yyterminate();
.    ;
