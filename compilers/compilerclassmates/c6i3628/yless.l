%{
	int u=0,l=0;
%}

%%

[a-z] {u++; yymore();}
[A-Z] {l++; yyless(3); }
[\t\n] {printf("%s",yytext); }

%%

main()
{
yylex();
}

 
