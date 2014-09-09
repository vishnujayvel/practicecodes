punct [,.;:!?]
text [a-zA-Z]
%%
")"" "+/{punct} {printf(")");}
")"/{text} {printf(") ");}
{text}+" "+/")" {while (yytext[yyleng-1]==. .) yyleng--; ECHO;}
({punct}|{text}+)/"(" {ECHO; printf(" ");}
"("" "+/{text} {while (yytext[yyleng-1]==. .) yyleng--; ECHO;}
{text}+" "+/{punct} {while (yytext[yyleng-1]==. .) yyleng--; ECHO;}
." "+ ;
" "+ {printf(" ");}
. {ECHO;}
\n/\n\n ;
\n {ECHO;}
%%
int main()
{
	yyleng;
	return 0;
}
