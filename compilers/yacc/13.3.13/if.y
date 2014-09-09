%{
#include <stdio.h>
#include <stdlib.h>
%}
%token ID NUM IF LE GE EQ NE OR AND ELSE ELSEIF OC CC 
%right '='
%left AND OR
%left '<' '>' LE GE EQ NE
%left '+''-'
%left '*''/'
%right UMINUS
%left '!'
%%

S      : ST {printf("Input accepted.\n");exit(0);};
ST    : IF '(' E2 ')' OC ST1';'CC ELSEIF '('E2 ')' OC ST1';'CC ELSE OC ST1';'CC
        |IF '(' E2 ')' OC ST1';' CC 
        |IF '('E2 ')' OC ST1';'CC ELSE OC ST1';'CC 
        ;
ST1  : ST 
        | E
        ;
E    : ID'='E
      | E'+'E
      | E'-'E
      | E'*'E
      | E'/'E
      | E'<'E
      | E'>'E
      | E LE E
      | E GE E
      | E EQ E
      | E NE E
      | E OR E
      | E AND E
      | ID
      | NUM
      ;
E2  : E'<'E
      | E'>'E
      | E LE E
      | E GE E
      | E EQ E
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
	return 0;
}
main()
{
  printf("Enter the exp: ");
  yyparse();
}
