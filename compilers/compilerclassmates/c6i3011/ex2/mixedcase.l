%{
	int c=0, uc=0, lc=0, t;
%}
%%
[a-z] { lc++; yymore(); }
[A-Z] { uc++; yymore(); }
[^a-zA-Z \t\n] { }
[ \t\n] { if(lc>0 && uc>0) { c++; printf("%s",yytext); }
	  uc=0; lc=0;
	}
%%
main()
{
	yylex();
	printf("\nNo. of words in mixed case = %d\n",c);
}
