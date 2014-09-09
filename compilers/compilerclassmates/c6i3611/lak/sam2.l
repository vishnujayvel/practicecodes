%{
int c=0,v=0;
%}
%%
^[aeiouAEIOU] {c++;yymore();}
[aeiouAEIOU] {}
[ \n\t][aeiouAEIOU]([a-zA-Z0-9]*) {c++;yymore();printf("%s",yytext);}
%%
main()
{
  yylex();
  printf("%d",c);
}
