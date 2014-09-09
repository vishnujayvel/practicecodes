%{
#include<string.h>
#include<stdio.h>
int yylex(void);
void yyerror(char *);
int flag=0;
%}
%token INTEGER
%%
program:
program expr '\n' { if(flag!=1) printf("%d\n", $2); flag=0; }
|
;
expr:
INTEGER { $$ = $1; }
| expr '+' expr  { $$ = $1 + $2; }
| expr expr '-' { $$ = $1 - $2; }
| expr expr '*' { $$= $1 * $2; }
| expr expr '/' { if($1==0) { flag=1; yyerror("division error");} else $$=$1 / $2; }
;
%%
void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
}
int main(void) {
yyparse();
return 0;
}
