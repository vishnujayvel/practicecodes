%{
#include<stdio.h>
#include<ctype.h>
%}
%token num
%left '+''-'
%left '*''/'
%right '^'
%%
s:e'\n'	{printf("\n%d",$1);}
e:e e'+' {$$=$1+$2;}
 |e e'-' {$$=$1-$2;}
 |e e'*' {$$=$1*$2;}
 |e e'/' {$$=$1/$2;}
 |num ;
%%
yylex()
{
	int c;
	c=getchar();
	if(isdigit(c))
	{
	yylval==c-'0';
	return num;
	return c;
	}
}
int main()
{
	yyparse();
	return 1;
}
int yyerror()
{
	return 1;
}
int yywrap()
{
	return 1;
}
