%{
#include <stdio.h>
#include <stdlib.h>
%}
%token ID NUM IF ELSE LE GE EQ NE OR AND
%right "="
%left OR AND
%left '>' '<' LE GE EQ NE
%left '+' '-'
%left '*' '/'
%right UMINUS
%left '!'

%%

S         : ST {printf("Correct Syntax\n"); exit(0);}
ST       : IF '(' E ')' DEF ELSE DEF


           ;
DEF    : '{' BODY '}'
           | E';'
           | ST
|

           ;
BODY  : BODY BODY
           | E ';'
           | ST
           |
           ;

E        : ID '=' E
          |E '+' E
          |E '-' E
          |E '*' E
          |E '/' E
          | E '<' E

          | E '>' E
          | E LE E
          | E GE E

          | E EQ E
          IF '(' E ')' DEF ELSE DEF
| E NE E
 | E OR E
          | E AND E
          | ID
          | NUM
          ;
%%
#include "lex.yy.c"
int yyerror()
{
        printf("Syntax Error\n");
        return -1;
}
int yywrap()
{
        return 1;
}

int main() 
{
        yyparse();
}


