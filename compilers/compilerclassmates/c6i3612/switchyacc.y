%{
#include<stdio.h>
int yylex(void);
void yyerror(char* s);
%}
%token SWITCH
%token VAR
%token INT
%token RELOP
%token LOGIC
%token CASE
%token BREAK
%token RETURN
%token DEFAULT
%%
stmt:
swstmt '\n' {printf("correct syntax");}

swstmt:
SWITCH '(' VAR ')' '\n' '{' '\n' CASE e ':' BREAK ';' '\n' DEFAULT ':' '\n' '}'

e:
VAR
|INT
%%
void yyerror(char* s)
{
fprintf(stderr,"%s\n",s);
}
int main()
{
  yyparse();
}


