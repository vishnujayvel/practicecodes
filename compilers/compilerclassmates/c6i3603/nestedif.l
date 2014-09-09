%{
for i=0,j=0,l=0;
char a[100],c[100];
%}
%%
if(\()[^\)]* { strcpy(a,yytext);}
(\{)[^}]* { strcpy(c,yytext);}
%%
main()
{
yylex();
for(
