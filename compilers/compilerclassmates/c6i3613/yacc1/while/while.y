%{
#include<stdio.h>
int yylex(void);
void yyerror(char*);
#include "y.tab.h"
%}
%token WHILE
%token INTEGER
%token VAR
%token RELOP
%token W
%%
stmt:
whilestmt '\n' {printf("correct syntax");}

whilestmt:
W
|W '(' intstmt ')'

intstmt:
VAR RELOP INTEGER
|INTEGER
%%
void yyerror(char *s)
{
   fprintf(stderr,"%s\n",s);
}
void main()
{
   yyparse();
}

