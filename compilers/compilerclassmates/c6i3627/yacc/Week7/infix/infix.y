%{
#include <stdio.h>
#include <stdlib.h>
void yyerror(char *);
int yylex(void);
%}
%token INTEGER
%left '+' '-' '*' '/'
%%

program :
	program expr '\n' {printf("Answer:%d\n",$2);}
	|
	;

expr 	:
	INTEGER	{$$ = $1;}
	| expr '+' expr { $$ = $1 + $3;}
	| expr '-' expr { $$ = $1 - $3;}
	| expr '*' expr { $$ = $1 * $3;}
	| expr '/' expr { $$ = $1 / $3;}
	;
%%
void yyerror(char *s){printf("Error:%s",s);}
int main(void)
{
yyparse();
return 0;
}
