%token WHILE OB CB ID NUM RELOP LOG
%{
	int yylex(void);
	void yyerror(char *);
	#include<stdio.h>
%}
%%

program: 
	WHILE OB E CB {printf("Correct!\n");}
	;
E:
	ID RELOP ID 
	| ID RELOP NUM 
	| ID
	| NUM
	| E LOG E
	| OB E CB 
	| ;
%%
int main()
{
	yyparse();
	return 0;
}
void yyerror(char *s)
{
	printf("%s\n", s);
}
