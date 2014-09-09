%{
%}
%%
[a-z] {yyless(2);printf("%s\n",yytext);}
[A-Z] {yyless(3);printf("%s\n",yytext);}
[ \n\t] {}

%%
int main()
{
yylex();
return 0;
}
