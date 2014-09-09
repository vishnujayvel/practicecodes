%{
#include<stdio.h>
int yylex(void);
void yyerror(char*);
#include "y.tab.h"
%}
%token INTEGER
%token VAR
%token RELOP
%token F
%%
stmt:
forstmt '\n' {printf("correct syntax");}

forstmt:
F '(' intstmt ';' intstmt ';' intstmt ')' 

intstmt:
VAR RELOP INTEGER
|VAR '+' '+'
|VAR '-' '-'
|
;
%%
void yyerror(char *s)
{
   fprintf(stderr,"%s\n",s);
}
void main()
{
   yyparse();
}   
 

