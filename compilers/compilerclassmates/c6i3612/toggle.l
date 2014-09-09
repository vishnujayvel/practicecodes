
%%
[a-z] {printf("%c",yytext[0]-32);}
[A-Z] {printf("%c",yytext[0]+32);}
[ \n\t] {printf("%c",yytext[0]);}
%%
int main()
{
yylex();
return 0;
}
