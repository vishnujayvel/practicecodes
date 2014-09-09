%{
int c;
%}
%%
[A-Z] yymore();
. ;
\n printf("%s",yytext);
%%
void main()
{
  yylex();
}
