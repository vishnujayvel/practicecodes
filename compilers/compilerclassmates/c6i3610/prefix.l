%{

	int i,j=0,k=0;
	char sym[30];
%}
alpha [a-zA-Z]
plus [+]
minus [-]
mul [*]
div [/]
symbol [+-*/]

%%

{alpha} {printf("%c",yytext[0]);if(k==0){} else { k--; printf("%c",sym[k]); }}
{plus} {sym[k]='+';k++;}
{minus} {sym[k]='-';k++;}
{mul} {sym[k]='*';k++;}
{div} {sym[k]='/';k++;}

%%
main()
{
yylex();
}
