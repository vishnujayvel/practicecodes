%{
int count=0;
%}
%%
[kK] count++;printf("%s",yytext);
[ ][kK]([a-zA-Z0-9]*) count++;printf("%s",yytext);
([a-zA-Z0-9]*) 
[ ]([a-zA-Z0-9]*) 
%%

main()
{
  yylex();
  printf("NO of words that begin with k is %d",count);
}

