%{
#include <stdio.h>
#include <stdlib.h>
void yyerror(char *);
int yylex(void);
%}
%token INTEGER
%token COMMAND
%token OBRACKET
%token CBRACKET
%token VAR
%token DELIM
%token COMP
%token INC
%token EQ
%token BODY
%%

program :
	program loop {printf("Parsed successfully.\n");}
	|
	;

loop	:
	COMMAND OBRACKET init test update CBRACKET
	|
	;

init	:
	VAR EQ INTEGER DELIM //{printf("init");}
	| VAR EQ VAR DELIM
	| DELIM
	;

test	:
	VAR COMP INTEGER DELIM //{printf("test");}
	| VAR COMP VAR DELIM
	| DELIM
	;

update	:
	VAR INC //{printf("update");}
	|
	;
%%
void yyerror (char *s){printf("Error: %s",s);}
int main(void)
{
yyparse();
return 0;
}
