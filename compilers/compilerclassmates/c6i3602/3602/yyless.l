%%
[0-9]+ ECHO; yyless(2);
[a-z]+ yyless(3); printf("%s-",yytext);
%%
int main()
{
yylex();
}
