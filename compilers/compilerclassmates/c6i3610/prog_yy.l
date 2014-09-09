%{
	int count=0;
	char str[30];
	#include<string.h>
%}
alpha [a-zA-Z]
some [^ ]
%%

{some}+ { printf(" ");  yyless(3); printf("%s",yytext);/*yymore();*/ }

%%

int yywrap(void){
return 1;}

main()
{

	yylex();
}
