%{
	#include<string.h>
	int count=0;
	char str[30];
%}

alpha [a-z A-Z]
space [^ ]

%%

{space}+ { printf(" ");
	  yyless(3);
	  printf("%s",yytext);
	}

%%

main()
{
yylex();
}
