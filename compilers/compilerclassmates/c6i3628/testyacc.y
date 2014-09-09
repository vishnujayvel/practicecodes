
%token INTEGER
%left '+' '-'
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
| expr '+' expr { $$ = $1 + $3;}
| expr '-' expr { $$ = $1 - $3; }
| expr '*' expr { $$ = $1 * $3; }
| expr '/' expr { if($3==0) printf("Floating point exception"); else $$ = $1 / $3; }
| '(' expr ')' { $$ = $2; }
;

%%
void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
}

int main(void) {
yyparse();
return 0;
}

