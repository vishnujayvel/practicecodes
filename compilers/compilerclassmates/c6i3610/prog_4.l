%{
	int count=0;
	int small=0,big=0,i=0;
	char str[30];
	#include<string.h>
%}
alpha [a-zA-Z]
alphasmall [a-z]
alphabig [A-Z]
%%
{alpha}+ { big=0;small=0; for(i=0;i<yyleng;i++){if(islower(yytext[i])) small++; if(isupper(yytext[i])) big++; } if(small>0&&big>0) printf("%s",yytext);count++;}
%%
main()
{
yylex();
printf("Count=%d",count);
}

