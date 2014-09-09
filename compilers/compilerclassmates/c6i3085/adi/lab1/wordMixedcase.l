%{
	int count=0,uc=0,lc=0;
%}
%%
[a-z] {yymore();lc++;}
[A-Z] {yymore();uc++;}
[\n\t] {	if(lc>0&&uc>0)
		{
			count++;
			printf("%s\n",yytext);
		}
		uc=0;
		lc=0;
	}
%%
main()
{
	yylex();
	printf("No: of words in mixed case = %d",count);
}

