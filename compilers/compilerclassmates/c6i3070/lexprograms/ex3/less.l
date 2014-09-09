%%
[A-Z][a-z]* i{if(yyleng>5)
		yyless(5);
	    }
[a-z]* printf("%s",yytext);
%%
main()
{
yylex();
}
