%{
#include<stdio.h>
int yylex(void);
int yyerror(char*);
#include"y.tab.h"
%}
%token RELOP
%token IF
%token ELSE
%token INTEGER
%token VARIABLE
%%
stmt:
ifstmt	{printf("Syntax Verified");}

ifstmt:
IF '(' cond ')'

cond:
term RELOP term
|term

term:
INTEGER
|VARIABLE
	
%%

int yyerror(char* s)
{

fprintf(stderr,"%s\n",s);
}

int main()
{
yyparse();
}
