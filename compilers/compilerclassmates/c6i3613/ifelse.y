%{
#include<stdio.h>
int yylex(void);
void yyerror(char* s);
%}
%token IF
%token VAR
%token INT
%token RELOP
%token LOGIC
%token OTHER
%token ELSE
%%
stmt:
ifstmt '\n' {printf("correct syntax");}

ifstmt:
IF '(' expr ')' '\n' '{' '\n' '}' '\n' ELSE '\n' '{' '\n' '}'

expr:
VAR RELOP INT
|VAR RELOP INT LOGIC VAR RELOP INT
%%
void yyerror(char* s)
{
fprintf(stderr,"%s\n",s);
}
int main()
{
  yyparse();
}

