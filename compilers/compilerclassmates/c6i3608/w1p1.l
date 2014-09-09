%{
int count;
char str[10];
#include<string.h>
%}
%%
[a-zA-Z]+ {strcpy(str,yytext);if(str[0]=='k'||str[0]=='K'){printf("%s",str);count++;}}
%%
main()
{
yylex();
printf("\nNo. of words : %d",count);
}

