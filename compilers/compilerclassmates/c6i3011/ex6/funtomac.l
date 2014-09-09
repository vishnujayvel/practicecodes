%{

%}

data "int"|"float"|"void"|"char"

%%
^(data) printf("#define");
(data) ;
(return) ;
. ECHO;
[\n] { ECHO; printf("\\"); }
%%
main()
{
	yylex();
}
