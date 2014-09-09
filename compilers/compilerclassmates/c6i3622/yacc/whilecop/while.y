%{
#include<stdio.h>
//int yylex(void);
void yyerror(char*);
%}
%token INTEGER
%token VARIABLE
%token RELOP
%token FLOAT
%token body

%%
program:
FLOAT '('constmt')' b {printf("syntax correct");}
;
constmt:
|term RELOP term
|INTEGER
;
term:
INTEGER
|VARIABLE
;
b: body
  ;
%%
void yyerror(char *s) {
printf("Err");
}
void main() {
yyparse();
}
