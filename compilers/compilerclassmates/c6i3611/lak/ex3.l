%{
int lc=0,hc=0,c=0;
%}
%%
[a-z] {lc++;yymore();}
[A-Z] {hc++;yymore();}
[ \n\t] {if(lc>0&&hc>0){c++;hc=0;lc=0;printf("%s",yytext);}}
%% 
main()
{
  yylex();
  printf("No of words with mixed case is %d",c);
}
