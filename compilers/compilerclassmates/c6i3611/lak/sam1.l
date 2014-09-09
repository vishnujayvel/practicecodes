%{
  int c=0;
%}
%%
[aeiouAEIOU] c++;
%%
main()
{
  yylex();
  printf("%d",c);
}  
