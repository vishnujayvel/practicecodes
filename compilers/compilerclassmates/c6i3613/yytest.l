%{


%}

%%
[a-z]	{yymore();}
[A-Z]	{yyless(3);}
\n	{printf("%s",yytext);}
%%

int main()
{
yylex();
return 1;
}
