%%
[a-zA-Z] yymore();
[ \n\t] ECHO;
%%
main()
{
	yylex();
}
