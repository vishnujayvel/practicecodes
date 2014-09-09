%{
	int count=0;
	int i=0;val=0;
	char str[30];
	#include<string.h>
%}
alpha [a-zA-Z]
%%
{alpha}+ {for(i=0;i<yyleng;i++){if(yytext[i]=='a' || yytext[i]=='e'||yytext[i]=='i'||yytext[i]=='o'||yytext[i]=='u'){count++;}} if(count>=2){printf("%s",yytext); val++;} count=0;}
%%
main()
{
	yylex();
	printf("No of words=%d",val);
}
