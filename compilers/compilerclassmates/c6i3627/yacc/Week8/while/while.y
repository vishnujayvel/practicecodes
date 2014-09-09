%{
#include <stdio.h>
#include <stdlib.h>
void yyerror(char *);
int yylex(void);
%}
%token COMMAND OBRACKET CBRACKET VAR COMP INTEGER
%%
program	:
	program loop {printf("Parsed successfully\n");}
	|
	;

loop	:
	COMMAND OBRACKET cond CBRACKET
	;

cond	:
	VAR COMP INTEGER
	| VAR COMP VAR
	| INTEGER COMP VAR
	| INTEGER COMP INTEGER
	| INTEGER
	;
%%
void yyerror (char *e){printf("Error:%s",e);}
int main(void)
{
yyparse();
return 0;
}
