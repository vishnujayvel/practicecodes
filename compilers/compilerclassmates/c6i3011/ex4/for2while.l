%{

%}
%%
[ ] 		;
(for(;;))	{ printf("while(1)"); }
(for\(\;)		{ while(input()!=';');
		  printf(")");
		}
%%
main()
{
	yylex();
}


