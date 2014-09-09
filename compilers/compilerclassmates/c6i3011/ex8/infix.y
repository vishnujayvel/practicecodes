%{
	#include<stdio.h>
	int valid=0, value;
%}

%token NUM
%token OTHER
%left '+''-'
%left '*''/'

%%

start:
	expr		{value=$1;}
	;
expr:
	NUM		{$$=$1;}
	| OTHER		{valid=2;$$=0;}
	| expr '+' expr	{$$=$1+$3;}
	| expr '-' expr {$$=$1-$3;}
	| expr '*' expr {$$=$1*$3;}
	| expr '/' expr { if($3==0) {valid=1;$$=0;} else {$$=$1/$3;} }
	| '(' expr ')'	{$$=$2;}
	| '-'expr	{$$=-1*$2;}
	;
%%

int yyerror()
{
	printf("Invalid expression\n");
	valid=3;
	return 0;
}

main()
{
	yyparse();
	if(valid==1) printf("Divide by zero error\n");
	if(valid==2) printf("Invalid character\n");
	if(valid==0) printf("Value: %d\n",value);

}
