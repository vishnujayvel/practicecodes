%%
['/'][a-zA-Z]*  {yyless(1);}
[A-Za-z]* printf("%s", yytext);
%%
main()
{
	yylex();
}
