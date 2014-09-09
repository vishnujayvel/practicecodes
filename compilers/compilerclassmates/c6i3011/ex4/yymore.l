%%
^[a-zA-Z]		yymore();
[ ][a-zA-Z]*		yyless(1);
[\n]			ECHO;
%%
main()
{
	yylex();
}
