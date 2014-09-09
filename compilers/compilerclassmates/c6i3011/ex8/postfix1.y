%{
	#include<stdio.h>
%}

%token NUM
%token OTHER

%%

S:
	E	{printf("Value: %d\n",$1);}
E:
	  E E'+'	{$$=$1+$2;}
	| E E'-'	{$$=$1-$2;}
	| E E'*'	{$$=$1*$2;}
	| E E'/'	{$$=$1/$2;}
	| NUM		{$$=$1;}
//	| OTHER		{yyerror();}
	;

%%

int yyerror()
{
	printf("Invalid\n");
	return 0;
}

main()
{
	yyparse();
}
