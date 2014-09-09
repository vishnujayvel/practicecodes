%{
	int count=0,count_name=0,count_param=0;
	#include<string.h>
%}

alpha [*a-z1-9]
open [(]
close [)]
closebr [}]
%%
(#define) { if(count==0){ printf("int "); count++;}     }
{alpha}+ {if(count_name==0){ printf("%s",yytext); count_name++;} else if(count_name==1&&count_param==0){ printf("int %s",yytext);count_param++;   } else printf("%s;}",yytext);   }
{open} {printf("(");}
{close} {printf("){\n return ");}
%%
int main(){yylex();}
