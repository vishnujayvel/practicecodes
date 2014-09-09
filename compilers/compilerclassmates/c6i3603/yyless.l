%%
[a-zA-Z] { yymore(); }
[1] {
yyless(2);
printf("%s\n",yytext);
}
%%
main()
{
yylex();
}
