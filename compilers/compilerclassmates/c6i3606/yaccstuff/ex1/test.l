digit [0-9]
%%
digit { printf("digit"); }
%%
main()
{
	yylex();
}
