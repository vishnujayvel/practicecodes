ALPA [A-Za-z]
DIGIT [0-9]
%%
{ALPA}({ALPA}|{DIGIT})* return ID;
{DIGIT}+        {
			yylval=atoi(yytext);
                 	return NUM;
                }
[ \n\t]         yyterminate();
.               return yytext[0];
%%

