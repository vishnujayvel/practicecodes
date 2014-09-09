%%
harikrishnan { yyless(2);}
[a-z]* {
		printf("%s",yytext);
}
%%
main()
{
yylex();
}
