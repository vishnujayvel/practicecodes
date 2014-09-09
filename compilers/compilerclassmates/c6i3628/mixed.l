%{
	#include<string.h>
	int count=0;
	char str[30];
	int small=0,big=0,i=0;
%}

alpha [a-zA-Z]
alphasmall [a-z]
alphabig [A-Z]
digit [0-9]
space [\n\t]
start ^a

%%

{alpha}+ {	strcpy(str,yytext);
		big=0;
		small=0;
		for(i=0;i<yyleng;i++)
		{
			if(islower(yytext[i]))
			small++;
			if(isupper(yytext[i]))
			big++;
		}
	if(small>0 && big>0)
{
	printf("%s",yytext);
	count++;
}
	}

%%

int main(void)
{
yylex();
printf("Count=%d\n",count);
}

