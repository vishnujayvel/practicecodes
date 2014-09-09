%{
int wcount,vcount,i;
char str[10];
#include<string.h>
%}
%%
[a-zA-Z]+ {strcpy(str,yytext);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
vcount++;
}
if(vcount>1)
{
printf("%s",str);
wcount++;
}
vcount=0;
}
%%
main()
{
yylex();
printf("\nNo. f words : %d",wcount);
}

