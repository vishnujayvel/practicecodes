%{
int count=0,upper=0,lower=0;
%}
%%
[a-z]	{lower++;yymore();}
[A-Z]	{upper++;yymore();}
[ \n\t]	{if(lower>0 && upper>0)
	{count++;
	printf("%s",yytext);
	}
	upper=0;
	lower=0;
	}
%%
main()
{
yylex();
printf("\nNo.of characters in mixed case=%d",count);
}
