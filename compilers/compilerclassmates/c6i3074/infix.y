%{
	#include<stdio.h>
	int valid=0,temp,num;
%}

%token num
%left '+''-'
%left '*''/'
%nonassoc UMINUS
%%

expr1:expr {temp=$1;}
expr:expr '+' expr {$$=$1+$3;}
    	| expr '-' expr {$$=$1-$3;};
	| expr '*' expr {$$=$1*$3;}
	| expr '/' expr {if($3==0){valid=1;
					$$=0;}
else	{$$=$1/$3;}}
	|'('expr')'	{$$=$2;}
	|'-'expr 	{$$=-1*$2;}
	|num	{$$=yylval;}
	;
%%

int yyerror()
{
	printf("\n invalid expression!\n");
	valid=2;
	return 0;
}

int main()
{
	printf("\n enter the expression to be evaluated\n");
	yyparse();
	if(valid==1)
	{
		printf("\n Division by 0!\n");
	}	
	if(valid==0)
	{
		printf("\n valid expression!\n");
		printf("the value evaluated is %d",temp);
	}
}


