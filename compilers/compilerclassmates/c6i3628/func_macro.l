%{
        int count=0;
	int open=0;
	char name[100];
	#include<string.h>
%}

alpha [a-z1-9*/=!<>;+-]
alphaname [a-z1-9()]
openbr [{]
closebr [}]
%%
{alpha}+ { if(count==0){ printf("#define ");    count++;} else{ printf("%s",yytext);  }     }
{openbr} {if(open==0){open++; printf("\b\b"); } else printf("{");}
{closebr} {}
%%

int main()
{
yylex();
return 0;
}


