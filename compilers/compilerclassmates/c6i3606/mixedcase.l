%{
	int c=0, bl=0, sl=0;
%}
%%
[a-z] {sl++; yymore();}
[A-Z] {bl++; yymore();}
[' '\t\n] {	if(bl>0 && sl>0) {c++; printf("%s", yytext);}
		bl=0; sl=0;
	  }
%%
main()
{
	yylex();
	printf("\nNo. of words in mixed case = %d\n", c);
}
