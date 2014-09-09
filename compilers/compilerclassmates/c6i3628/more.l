%{
	int count=0;
	char str[30];
	#include<string.h>
%}

alpha [a-zA-Z]

%%

{alpha} { printf("");
	  printf("%s",yytext);
	 yymore();
	}

%%

main()
{	
yylex();
}

