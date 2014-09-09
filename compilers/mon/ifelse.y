%{
#include<stdio.h>
extern char* yytext;
//extern char yychar;
extern int yylineno;
%}
%token ID REL LOGIC NUM IF ELSE

%%
start:
       	IF '(' cond ')' '{'body'}' {printf("valid\n");}
	| IF '(' cond ')' '{'body'}' ELSE '{'body'}' { printf("valid\n"); }
	;
cond:
	NUM
	|NUM REL NUM
	|NUM LOGIC NUM
	|ID
	|ID REL ID 
	|ID LOGIC ID
	|'('cond')' LOGIC '('cond')'
	;
body:
	cond
	|
	;
%%

void yyerror(){
//	printf("Invalid\n text: %s \n line:%u\n yychar:%c",yytext,yylineno,yychar);
}
main(){
	yyparse();
}

