%{
	int c=0,v=0;
%}
%%
[aeiouAEIOU] {v++;yymore();}
[^aeiouAEIOU\n\t] { yymore(); }
[\n\t] {if (v>=2) {c++; printf("%s",yytext);} v=0;}
%%
main()
{
	yylex();
	printf("no of words with vowels > 2 is %d",c);
}
