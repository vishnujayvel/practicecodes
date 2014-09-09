%{
	int u=0,l=0;
%}
%%
[a-z]	{u++;yymore();}
[A-Z]	{l++;yyless(2);}
[\n ]	{printf("%s",yytext);}
%%
int yywrap()
{
return 1;
}
int main()
{
yylex();
return 0;
}
