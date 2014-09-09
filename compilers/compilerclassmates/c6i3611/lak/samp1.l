%{
int counter = 0;
%}
letter	[a-zA-Z]

%%
{letter}+	{printf(.a word\n.); counter++;}

%%
main() {
	yylex();
	printf(.There are total %d words\n., counter);
}

