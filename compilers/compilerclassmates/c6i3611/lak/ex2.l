%{
int v=0,c=0;
%}
%%
[aeiouAEIOU] {v++;yymore();}
[a-zA-Z0-9] {yymore();}
[ \n\t] {if(v>=2){c++;printf("%s",yytext);}v=0;} 
%%
main()
{
  yylex();
  printf("No of words with 2 vowels is %d",c);
} 
