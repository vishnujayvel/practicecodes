%token DIGIT OP
%left '/' '*'
%{
	#include <stdio.h>
	int yylex(void);
	void yyerror(char *);
%}
%%

program: E1 {}
E1: DIGIT OP E1
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
