%{
#include<stdio.h>
#include<stdlib.h>
#include<lex.yy.c>
void yyerror(char *c);
%}
%token keey
%token def
%token def_o
%token contents
%token sm
%token clos
%token op
%token n
%token inc
%%
line: keey def a sm def_o b sm def_o c sm contents { printf("CORRECT SYNTAX");} ;
a: '='
;
b:
| op
;
c: inc clos
| inc
;
%%
int main()
{
 yyparse();
}
void yyerror(char *c)
{
printf("SYNTAX ERROR");
}

