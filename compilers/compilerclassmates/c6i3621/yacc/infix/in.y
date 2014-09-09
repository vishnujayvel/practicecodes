%token INTEGER VARIABLE
%left '+' '-'
%left '*' '/'
%{
#include<stdlib.h>
#include<stdio.h>
void yyerror(char *);
int yylex(void);
int sym[26];
%}
%%
expr:
INTEGER
| VARIABLE { $$ = sym[$1]; }
| expr '+' expr { $$ = $1 + $3; }
| expr '-' expr { $$ = $1 - $3; }
| expr '*' expr { $$ = $1 * $3; }
| expr '/' expr { $$ = $1 / $3; }
| '(' expr ')' { $$ = $2; }
;
%%
#include<stdio.h>
void yyerror(char *s) {
printf( "%s\n", s);
}

int main(void) {
yyparse();
return 0;
}

