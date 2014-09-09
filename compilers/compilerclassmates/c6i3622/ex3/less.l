%{

%}

%%

[a-z]* {yyless(3);
	printf("%s\n",yytext);  
	}
\n printf("next line\n");
. ;
%%

main()
{
 yylex();
 return 0;
}
