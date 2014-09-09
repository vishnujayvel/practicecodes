%token INTEGER
//%left '+' '-'
//%left '*' '/'
%{
#include<stdio.h>
int yylex(void);
void yyerror(char*);
%}
%%
program:
expr '\n' { printf("%d\n", $1); }
|
;
expr:
INTEGER
| expr  expr '+' { $$ = $1 + $2; }
| expr  expr '-' { $$ = $1 - $2; }
| expr  expr '*' { $$ = $1 * $2; }
| expr  expr '/'{ $$ = $1 / $2; }
;
%%
void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
}
void main() {
yyparse();
}

