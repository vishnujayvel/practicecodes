%{
#include<stdio.h>
#include<stdlib.h>
%}
%token SWITCH CASE DEFAULT NUM GE LE EQ NE OR AND
%%

S : ST {printf("valid switch case"); exit(0);}
ST : SWITCH '(' ID ')' 
%%
#include "lex.yy.c"
main()
{
	yyparse();
}
int yywrap()
{
return 1;
}
int yyerror()
{
	printf("Invalid Syntax");
	return 1;
}
