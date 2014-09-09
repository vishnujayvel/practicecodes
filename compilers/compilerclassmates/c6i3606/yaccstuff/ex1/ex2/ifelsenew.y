%token IF ELSE OB CB OFB CFB ID NUM RELOP OTHER NL
%{
	int yylex();
	#include<stdio.h>
	void yyerror(char *);
%}
%%
expr: IF OB COND CB 
	| 
	IF OB COND CB NL OFB OTHER CFB
	|
	IF OB COND CB NL OFB NL OTHER NL CFB NL ELSE NL OFB NL OTHER NL CFB {printf("Yes");}
	|
;
COND: ID 
	|
	NUM
	|
	ID RELOP ID
	|
	;
%%
void main()
{
	yyparse();
}
void yyerror(char *s)
{
}
