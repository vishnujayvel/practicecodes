%token INTEGER
%left '-' '+'
%left '*' '/'
%{
#include<stdio.h>
int yylex(void);
int yyerror(char *);	
int x;
%}
%%
program:
	program expr '\n' {printf("%d", $2);}
	|
	;
expr:
	INTEGER { $$ = $1 ; }
    	| expr '+' expr { $$ = $1 + $3 ; }
	|
        ;
%%
int yyerror(char *s)
{
printf("%s",s);
return 0;
}
int main()
{
yyparse();
return 0;
}
