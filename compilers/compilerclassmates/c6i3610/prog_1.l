%{
	int count=0;
	char str[30];
	#include<string.h>
%}
alpha [a-zA-Z]
digit [0-9]
space [\t\n ]
start ^a
%%

{alpha}+ {strcpy(str,yytext); if(str[0]=='a'||str[0]=='A'){printf("%s",str); count++;}}
%%

main()
{
	yylex();
	printf("Count=%d\n",count);
}
