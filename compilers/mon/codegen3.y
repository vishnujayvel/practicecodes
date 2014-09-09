%{
	#include<stdio.h>
	#include<string.h>
%}
%token<var> NAME PLUS EQUAL MINUS
//%token<var> exp
%union{
char var[10];
}
%right EQUAL
%left PLUS MINUS

%%
input:line'\n'input
	|
	;
line:NAME EQUAL exp { printf("MOV %s,A\n",$1); }
      ;
exp:NAME PLUS NAME { printf("MOV A,%s\nADD A,%s\n",$1,$3); }
    |NAME MINUS NAME { printf("MOV A,%s\nSUB A,%s\n",$1,$3); }
     ;
%%
main(){
yyparse();
}
int yywrap(){
	return 1;
}
 yyerror(){
 printf("error");
}



