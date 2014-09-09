
%{
#include <stdio.h>
#include <stdlib.h>
%}
%token ID NUM IF ELSE ELSEIF  LE GE EQ NE OR AND
%right '='
%left OR AND
%left '>' '<' LE GE EQ NE
%left '+' '-'
%left '*' '/'
%right UMINUS
%left '!'

%%

S  : ST {printf("Valid \n"); exit(0);}
ST : IF '(' E ')' DEF
     | ELSEIF '(' E ')' DEF
     | ELSE '(' E ')' DEF
     | ELSE DEF
     | ST ST
     |
      ;

E  : NUM
     |ID
     | E '+' E
     | E '-' E
     | E '/' E
     | E '*' E
     | E GE  E
     | E LE  E
     | E NE  E
     | E OR  E
     | E AND E
     | E '<' E
     | E '>' E
     | E '+' '+'
     | E '-' '-'
     | E '=' E
     | E EQ  E
     |
     ;

DEF : '{' BODY '}'
      |
      ;
BODY : BODY BODY
     | E';'
     |
     ;

%%
#include "lex.yy.c"
main()
{
        yyparse();
}
int yywrap()
{
        return 1;
}
int yyerror()
{
        printf("Invalid Syntax");
        return 1;
}

