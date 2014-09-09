%{
	#include<stdio.h>
%}
%token KEY RELOP LOGIC ID NUM OTHER OB CB OCB CCB

%%
start:
	KEY OB cond CB OCB CCB { printf("correct !\n"); }
cond:
	  ID RELOP NUM
	| OB cond CB LOGIC OB cond CB
	| NUM
	;
%%
int yyerror(){
	printf("incorrect\n");
	return 0;
}

main(){
 yyparse();
}

