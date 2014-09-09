%{
#include <stdio.h>
#include <stdlib.h>
void yyerror(char *);
int yylex(void);
%}
%token INTEGER
%left '+' '-'
%left '/' '*'
%%

program :
	program expr '\n' {}
	|
	;

expr 	:
	INTEGER	{$$ = $1;}
	| '-' expr {$$ = -1 * $2;}
	| expr '+' expr { $$ = $1 + $3;generate($1,$3,'+',$$);}
	| expr '-' expr { $$ = $1 - $3;generate($1,$3,'-',$$);}
	| expr '*' expr { $$ = $1 * $3;generate($1,$3,'*',$$);}
	| expr '/' expr { $$ = $1 / $3;generate($1,$3,'/',$$);}
	| '(' expr ')'  { $$ = $2;}
	;
%%
void yyerror(char *s){printf("Error:%s",s);}
int main(void)
{
yyparse();
return 0;
}

void generate(int arg1,int arg2,char opr,int result)
{
printf("opr\targ\targ\tresult\n");
printf("%c\t%d\t%d\t%d\n",opr,arg1,arg2,result);
}
