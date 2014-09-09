%{
	int c=0,lc=0,uc=0;
%}

%%
[a-z]+ { lc++;yymore();}
[A-Z]+ { uc++;yymore();}
[ \n\t] { if(lc>0 && uc>0) {c++;printf("%s",yytext);}lc=0;uc=0;}
%%

main()
{
	yylex();
	printf("\nNo. of words in mixed case=%d",c);
}
