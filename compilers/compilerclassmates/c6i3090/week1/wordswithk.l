%{
	int counnt count=0;

%}
%%
^[kK] { count++; yymore();}
[\n \t]([kK])([a-z]|[A-Z]|[0-9])* { count++; yymore(); printf("%s ",yytext);}
%%
main()
{
        yylex();
        printf("No of words starting with K or k: %d",count);
}
t=0;
	
%}
%%

