%{
int count=0,pos=0;
void pri(char ch[]);
char ch[100];
%}
alpha [a-zA-Z]
digit [0-9]
space [ \t\n,.:;]
start ^k|^K
%%
{start}({alpha}|{digit})*{space} {count++; printf("\n%s",yytext);}
{space}(k|K)({alpha}|{digit})* {count++; printf("\n%s",yytext); }
. ;
%%
main()
{
yylex();
printf("\n No of word starting with k:%d",count);
}

