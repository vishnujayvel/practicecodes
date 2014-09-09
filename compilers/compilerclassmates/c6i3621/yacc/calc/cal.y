%{
#include<string.h>
#include<stdio.h>
int yylex(void);
void yyerror(char *);
int flag=0;
%}
%token INTEGER
%left '-''+'
%left '*''/'
%%
program:
program expr '\n' { if(flag!=1) printf("%d\n", $2); flag=0; }
|
;
expr:
INTEGER { $$ = $1; }
| expr '+' expr { $$ = $1 + $3; }
| expr '-' expr { $$ = $1 - $3; }
| expr '*' expr { $$= $1 * $3; }
| expr '/' expr { if($3==0) { flag=1; yyerror("division error");} else $$=$1 / $3; }
;
%%
void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
}
int main(void) {
yyparse();
return 0;
}
