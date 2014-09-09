%token INTEGER
%left '+' '_'
%left '*' '/'
%{
#include<stdio.h>
void yyerror(char *);
int yylex(void);
int sym[26];
%}
%%
program:
expr '\n' { printf("%d\n",$1); }
|
;
expr:
INTEGER
| expr  expr '+' { $$ = $1 + $2;}
| expr  expr '-' { $$ = $1 - $2; }
| expr expr '*' { $$ = $1 * $2; }
| expr expr '/' { $$ = $1 / $2; }
;

%%
void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
}

int main(void) {
yyparse();
return 0;
}

