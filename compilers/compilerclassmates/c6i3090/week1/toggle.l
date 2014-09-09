%%
[a-z]   { printf("%c",yytext[0]-32); }
[A-Z]   { printf("%c",yytext[0]+32); }
%%
main()
{
	yylex();
}

