%{
	int c=0;
%}
%%
^[kK] {c++; printf("%s", yytext);}
[ ]([kK])([a-zA-Z])*  {c++; printf("%s", yytext);}
^([^kK])* {c++;}
[' ']([a-zA-Z])* {}
[ ]([a-zA-z])*([kK]) {}
['.'] {}
%%
main()
{
	yylex();
	printf("No. of words starting with k or K = %d\n", c);
}
