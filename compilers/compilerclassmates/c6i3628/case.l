%{
	#include<string.h>
	#include<ctype.h>
	int count=0;
	char str[30],i=0;
%}

alpha [a-zA-Z]
digit [0-9]
space [\t\n]
start ^a

%%

{alpha}+ {
		strcpy(str,yytext);
		for(i=0;i<yyleng;i++)
		{	
			if(isupper(str[i]))
			printf("%c",tolower(str[i]));
			if(islower(str[i]))
			printf("%c",toupper(str[i]));
		}
	}
%%

int main(void)
{
yylex();

}
	
