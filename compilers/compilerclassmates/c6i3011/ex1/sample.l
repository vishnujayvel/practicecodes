%{
int counter = 0;
%}
letter	[a-zA-Z]

%%
[a-zA-Z]+  {printf("Word"); counter++;}

%%
main()
{
	yylex();
	printf("There are %d words\n", counter);
}
