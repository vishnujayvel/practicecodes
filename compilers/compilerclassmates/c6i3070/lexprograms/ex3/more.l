%{
int flag=0;
%}
%%
B[^B]* {if(flag==0)
	{
	flag=1;
	yymore();
	printf("\n%s",yytext);
	}
	else
	{
	flag=0;
	printf("\n%s",yytext);
	printf("\n%d",yyleng);
	}
	}
%%
main()
{
yylex();
}
