digit [0-9]
letter [a-z]
%%
{digit} { printf("Digit"); }
{letter} { printf("Letter"); }
%%
main()
{
	yylex();
}
