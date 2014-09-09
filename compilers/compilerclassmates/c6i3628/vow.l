%{
	#include<string.h>
	char str[30];
	int i=0,val=0;
	int count=0;
%}

alpha [a-zA-Z]
digit [0-9]
start ^a
space [\t\n]

%%

{alpha}+ {
		strcpy(str,yytext);
		for(i=0;i<yyleng;i++)
		{
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
{	count++; }
   		}

if(count>=2)
{
	printf("%s",str);
	val++;
}
count=0;
 	}

%%

int main(void)
{
	yylex();
	printf("Number of words=%d\n",val);
}
