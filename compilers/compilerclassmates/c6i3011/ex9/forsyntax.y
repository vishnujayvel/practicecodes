%{
	#include<stdio.h>
%}

%token KEY
%token INCR
%token OPER
%token RELOP
%token LOGIC
%token ID
%token NUM
%token OB
%token CB
%token OCB
%token CCB
%token SC
%token EQ
%token OTHER

%%
start:
	KEY OB init SC cond SC incre CB OCB body CCB  {printf("Correct!\n");}
init:
	  ID EQ NUM 	
	;
cond:	
	  ID RELOP NUM	
	| OB cond CB LOGIC OB cond CB 
	;
incre:
	  ID INCR
	| ID EQ ID OPER NUM 
	| ID OPER EQ NUM 
	;
body:
	  OTHER
	| body OTHER
	;
%%

int yyerror()
{
	printf("Incorrect!\n");
	return 0;
}

main()
{
	yyparse();
}
