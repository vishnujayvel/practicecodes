%{
	int count=0;
%}

%%
(k|K)[a-z]*[0-9]*  {count++; printf("%s",yytext);}
^[a-j][a-z]*[0-9]*	;
^[l-z][a-z]*[0-9]*	; 
%%
main()
{
	yylex();
	printf("no of words starting witk k or K IS %d",count);
}
