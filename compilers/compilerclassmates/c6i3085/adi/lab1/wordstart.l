%{
	int count=0;
%}
%%
^[kK] {count++;printf("%s",yytext);}
[ ]([kK])([a-z]|[A-Z]|[0-9])* {count++;printf("%s",yytext);}
^[^kK]* {}
[ ][^kK]([A-Z]|[a-z]|[0-9])* {}
%%
main()
{
	yylex();
	printf("\nNo of words starting with K or k = %d",count);
}

