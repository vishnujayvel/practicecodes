%{
#include<stdio.h>
#include<stdlib.h>
void yyerror(char *c);
%}
%token ID NUM IF THEN GE EQ LE OR AND ELSE
%right '='
%left AND OR
%left '<''>' LE GE EQ NE
%left '+''-'
%right UMINUS
%left '!'
%%
S : ST{ printf("Input accepted\n"); exit(0); } ;
ST: IF '(' E2 ')' ST1';' ELSE ST1';'
;
ST1:ST
|E
;

E: ID'='E
|E'+'E
|E'-'E
|E'*'E
|E'/'E
|E'<'E
|E'>'E
|E LE E
|E GE E
|E EQ E
|E NE E
|E OR E
|E AND E
|ID
|NUM
;
E2: E'<'E
|E'>'E
|E LE E
|E GE E
|E EQ E
|E NE E
|E OR E
|E AND E
|ID
|NUM
;

%%
#include "lex.yy.c"
int main()
{
yyparse();
return 1;
}
void yyerror(char *c)
{
printf("ERROR SYNTAX");
}
