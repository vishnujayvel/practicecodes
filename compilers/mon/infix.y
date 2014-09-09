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
	expr	{value=$1;}
	;
expr:
	NUM {$$=$1;}
	| OTHER {valid=2;$$=0;}
	| expr '+' expr { $$=$1+$3;}
	| expr '-' expr { $$=$1-$3;}
	| expr '*' expr { $$=$1*$3;}
	| expr '/' expr { $$=$1/$3;}
	| '(' expr ')' { $$=$2; }
	| '-'expr { $$=-1*$2; }
	;
%%

int yyerror(){
	printf("invalid\n");
	valid=3;
}
int yywrap(){
return 1;
}


main(){
	yyparse();
	if(valid==1) printf("Divide by zero error\n");
	if(valid==2) printf("invalid char\n");
	if(valid==0) printf("value: %d\n",value);
}
//int yywrap(){
//return 1;
//}

