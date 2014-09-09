%{
	#include <stdio.h>
%}

%token SWITCH
%token CASE
%token DEF
%token BREAK
%token ID
%token NUM
%token OTHER

%%

start:
	SWITCH '('cond')''{' body '}' { printf("Valid\n"); }
	;
cond:
	  NUM
	| ID
	;
body:
	  cases
	| cases def
	;
cases:
	  cases cases
	| CASE NUM ':' OTHER BREAK ';'
	| CASE ID ':' OTHER BREAK ';'
	;
def:
	  DEF ':' OTHER

%%
#include "lex.yy.c"
void yyerror()
{
	printf("Invalid!\n");
}

main()
{
	yyparse();
}

