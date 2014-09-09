%%
[/][A-Za-z]*	yyless(1);
[A-Za-z]*	ECHO;
%%
main()
{
	yylex();
}
