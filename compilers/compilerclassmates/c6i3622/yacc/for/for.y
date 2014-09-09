%token INTEGER
%token VARIABLE
%token RELOP
%token FLOAT
%{
#include<stdio.h>
int yylex(void);

void yyerror(char*);
%}
%%
program:
FLOAT '('init ';' constmt ';' upd ')' {printf("syntax correct"); exit(0);}
;
init:
VARIABLE '=' VARIABLE
|VARIABLE '=' INTEGER
|
;
constmt:
term RELOP term
|
;
term:
INTEGER
|VARIABLE
;
upd:
VARIABLE '+' '+'
|VARIABLE '+'  '=' INTEGER
|VARIABLE '-'  '=' INTEGER
|VARIABLE '-' '-'
|
;

%%
void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
}
void main() {
yyparse();
}


