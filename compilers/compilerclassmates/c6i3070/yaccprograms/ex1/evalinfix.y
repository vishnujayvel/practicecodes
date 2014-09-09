%{
	#include<stdio.h>
	int valid=0,temp;
%}
%token num
%left '+''-'
%left '*''/'
%nonassoc UMINUS
%%
expr1:expr	{temp=$1;}
expr:expr'+'expr	{$$=$1+$3;}
    |expr'-'expr	{$$=$1-$3;}
    |expr'*'expr	{$$=$1*$3;}
    |expr'/'expr	{if($3==0){valid=1;$$=0;}else{$$=$1/$3;}}
    |'('expr')'		{$$=$2;}
    |'-'expr		{$$=-1*$2;}
    |num		{$$=yylval;}
    ;
%%
int yyerror()
{
printf("\nInvalid expression\n");
valid=2;
return 0;
}
int main()
{
printf("\nEnter the expression to be evaluated:");
yyparse();
if(valid==1)
{
printf("\nDivision by 0\n");
}
if(valid==0)
{
printf("\nValid expression\n");
printf("\nThe value evaluated is %d\n",temp);
}
}
