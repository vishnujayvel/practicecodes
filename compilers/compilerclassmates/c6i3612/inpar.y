%token INTEGER 
%left '+' '-'
%left '*' '/'
%{
#include<stdio.h>
int yylex(void);
void yyerror(char*);
%}
%%
program:
program statement '\n'
|
;
statement:
expr { printf("%d\n", $1); }
|
;
expr:
INTEGER
| expr '+' expr { $$ = $1 + $3; }
| expr '-' expr { $$ = $1 - $3; }
| expr '*' expr { $$ = $1 * $3; }
| expr '/' expr { $$ = $1 / $3; }
| '(' expr ')' { $$ = $2; }
;
%%
void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
}
void main() {
yyparse();
}
