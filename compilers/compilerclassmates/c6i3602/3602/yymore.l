%{
%}
%%
[0-9] yymore();
[^0-9 \n\t] yymore();
[\n\t] { printf("%s",yytext);}
%%
int main()
{
yylex();
}
