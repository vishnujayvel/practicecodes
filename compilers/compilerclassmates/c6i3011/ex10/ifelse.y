%{
	#include<stdio.h>
%}

%token IF
%token ELSE
%token REL
%token LOGIC
%token NUM
%token ID

%%

start:
	  IF '('cond')' '{'body'}'	{ printf("Valid\n"); }
	| IF '('cond')' '{'body'}' ELSE '{'body'}' { printf("Valid\n"); }
	;
cond:
	  NUM
	| NUM REL NUM
	| NUM LOGIC NUM
	| ID
	| ID REL ID	{ printf("condition"); }
	| ID LOGIC ID
	| '('cond')' LOGIC '('cond')'
	;
body:
	  cond
	|
	;
%%

void yyerror()
{
	printf("Invalid!\n");
}

main()
{
	yyparse();
}


