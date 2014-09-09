%%
[a-zA-Z]+  ECHO;
\/\/[a-zA-Z]+	;
\/\*[A-Za-z\n\t]+\*\/	;
%%

main()
{
	yylex();
}
