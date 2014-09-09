%{
int c=0;
%}
%%
^[kK] {c++;printf("%c",yytext[0]);
ECHO;}
[ ]([kK])([a-z]|[A-Z]|[0-9])* {c++;ECHO;}
^[^kK]([a-z]|[A-Z]|[0-9])* {printf(" ");}
(^|[ ])([^kK])([a-z]|[A-Z]|[0-9])* { printf(" ");}
%%
main()
{
yylex();
printf("no of words starting with k %d\n%s",c,yyless(3));
}
