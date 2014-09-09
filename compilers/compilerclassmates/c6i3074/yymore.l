%{
%}

%%

priya { yymore();printf("%s",yytext);}
%%
int main()
{
	yylex();
}
