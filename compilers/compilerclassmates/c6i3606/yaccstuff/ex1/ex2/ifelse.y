%token IF ELSE OB CB RELOP
%{
	int yylex();
	void yyerror(char *);
	#include<stdio.h>
%}
%%
expr: IF OB RELOP CB {printf("Correct");}
	|
	expr ELSE {printf("Correct"); }
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
