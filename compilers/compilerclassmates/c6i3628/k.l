%{
	#include<string.h>
	int count=0;
	char str[30];
	
%}

alpha [a-zA-Z]
digit [0-9]
space [\t\n]
start ^a

%%

{alpha}+ { 
		strcpy(str,yytext);
		if(str[0]=='k'||str[0]=='K')
		{
			printf("%s",str);
			count++;
		}
  	}
%%
int main(void)
{
	yylex();
	printf("count=%d\n",count);
	return 0;
}	
	
