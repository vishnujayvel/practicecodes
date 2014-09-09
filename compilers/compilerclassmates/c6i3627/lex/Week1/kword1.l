%{
int count=0;
char str[30];
#include <string.h>
%}
digit [0-9]
alpha [a-zA-Z]
start ^a
space [ \t\n]
%%
{alpha}+ {strcpy(str,yytext);
	if(str[0]=='k' || str[0]=='K')
	{
	printf("%s",str);
	count++;
	}
	}
. {printf(" ");};
%%
main()
{
yylex();
printf("Count:%d",count);
}
