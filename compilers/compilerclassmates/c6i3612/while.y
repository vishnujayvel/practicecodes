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
FLOAT '('constmt')' {printf("syntax correct");}
;
constmt:
term RELOP term
|INTEGER   
;
term:
INTEGER 
|VARIABLE 
;
%%
void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
}
void main() {
yyparse();
}
