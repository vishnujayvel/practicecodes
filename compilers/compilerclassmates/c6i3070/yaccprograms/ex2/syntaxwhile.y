%{
#include<stdio.h>
%}
%token key
%token ob
%token op
%token vb
%token cb
%token nu
%token co
%token cc
%token cn
%token tt
%token sp
%token sc
%token dec
%%
line:key ob rp cb co a cc{printf("\nCorrect syntax");}
	;
a:vb
 |nu
 |vb nu
 |a a
 |dec sp vrb sc
 ;
vrb:vb nu
 |vb
 ;
rp:ob vrb op a cb
 |rp tt rp
 |vb op nu
 |vrb op vrb
 |vrb op nu
 ;
%%
#include"lex.yy.c"
int main()
{
yyparse();
}
int yywrap()
{
return 1;
}
int yyerror()

{
printf("\nIncorrect syntax");
return 1;

}
