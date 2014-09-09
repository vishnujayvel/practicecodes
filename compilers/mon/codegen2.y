%{
	#include<stdio.h>
	#include<ctype.h>
	#include<string.h>
//	#include "y.tab.h"
%}
%token<var> NAME PLUS EQUAL MINUS
%union{
char var[10];
}
%right EQUAL
%left PLUS MINUS
%%
input: line'\n'input
       |
       ;
line: NAME EQUAL exp { printf("MOV %s  A\n",$1); }
exp: NAME PLUS NAME { printf("MOV A %s\nADD A %s\n",$1,$3); }
     |NAME MINUS NAME { printf("MOV A %s\nSUB A %s\n",$1,$3); }
%%
extern yylineno;
yyerror(){
	printf("error in line %u",yylineno);
}
yywrap(){
  return 1;
}
main(){
yyparse();
}
 
	
