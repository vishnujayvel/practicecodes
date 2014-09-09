%token SW OB CB ID CASE C DIGIT BREAK DEFAULT SC
%{
	#include<stdio.h>
	int yylex(void);
	void yyerror(char *);
%}
%%
program: SW OB ID CB E1 {printf("CORRECT");}
	;
E1: CASE DIGIT C BREAK SC E1
  | DEFAULT C
  ;
%%
void yyerror(char *s)
{
	printf("%s\n",s);
}
int main()
{
	yyparse();
	return 0;
}
