%{
	int count=0;
%}
%%
[K|k][a-z]*[0-9]*	{count++; printf("%s",yytext);}
^[a-j][a-z]*[0-9]*	;
^[l-z][a-z]*[0-9]*	;
%%
main()
{
yylex();
printf("\nNo of words Starting with k or K %d",count);
}
