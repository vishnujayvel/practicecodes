%{
#include<stdio.h>
void yyerror(char *s);
%}
%token key
%token op
%token ob
%token vb
%token cb 
%token nu
%token co
%token cn
%token tt
%token sp
%token sc
%token dec
%token cc
%token vrp
%token zero
%%
line:key ob rp cb co a cc { printf("\n correct"); }
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
|vrp op nu
|zero
;
%%
int main()
{
yyparse();
}
void yyerror(char *s)
{
printf("\n error");
}




