digit [0-9]
letter [a-zA-Z]
%%
{letter}({letter}{digit})* printf("id: %s\n", yytext);
\n printf("new line\n");
%%
main()
{
	yylex();
}
