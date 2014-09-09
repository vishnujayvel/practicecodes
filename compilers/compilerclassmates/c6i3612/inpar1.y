%token INTEGER 
%left '+' '-'
%left '*' '/'
%{
#include<stdio.h>
int yylex(void);
int f=0;
void yyerror(char*);
%}
%%
program:
expr '\n' {if(f==0) printf("%d\n", $1); 
	   else printf("DIVIDE BY ZERO");}
|
;
expr:
INTEGER
| expr '+' expr { $$ = $1 + $3; }
| expr '-' expr { $$ = $1 - $3; }
| expr '*' expr { $$ = $1 * $3; }
| expr '/' expr {if($3 != 0)  $$ = $1 / $3;
		else f=1; }
| '(' expr ')' { $$ = $2; }
;
%%
void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
}
void main() {
yyparse();
}
