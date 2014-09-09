%{
	
%}
%%
narain { yyless(3);}
[a-z]+ {printf("%s",yytext);}
%%
int yywrap()
{
	return 1;
}
int main()
{
	yyin;
	yylex();
	return 0;
}
