%{
	int count=0,lc=0,uc=0;
%}
%%
[a-z] { lc++;yymore();}
[A-Z] { uc++; yymore();}
[ \n\t] { if(lc>0 && uc>0){ count++; printf("%s",yytext);} uc=0;
		lc=0;
	}
%%
main()
{
	yylex();
	printf("no of words in meixed case =%d",count);
}
