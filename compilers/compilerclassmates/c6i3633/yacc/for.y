%{
#include <stdio.h>
#include <stdlib.h>
%}
%token ID NUM FOR LE GE EQ NE OR AND
%right "="
%left OR AND
%left '>' '<' LE GE EQ NE
%left '+' '-'
%left '*' '/'
%right UMINUS	
%left '!'


%%
S         : ST {printf("Valid for loop\n"); exit(0);}
ST       : FOR '(' E ';' E2 ';' E ')' DEF
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
          | E '+' E
          | E '-' E
          | E '*' E
          | E '/' E
          | E '<' E
          | E '>' E
          | E LE E
          | E GE E
          | E EQ E
          | E NE E
          | E OR E
          | E AND E
          | E '+' '+'
          | E '-' '-'
          | ID
          | NUM
	  |
          ;


E2     : E'<'E
         | E'>'E
         | E LE E
         | E GE E
         | E EQ E
         | E NE E
         | E OR E
         | E AND E
	|
         ;
%%

#include "lex.yy.c"
main() {
    //printf("Enter the expression:\n");
    yyparse();
}
int yywrap()
{
        return 1;
}
int yyerror()
{
        printf("Invalid For loop");
        return 1;
}


	
