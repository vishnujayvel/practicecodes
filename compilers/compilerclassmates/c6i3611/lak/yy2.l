%{
 int c;
%}
%%
[a-z]*  yymore(); 
[A-Z]* {yyless(2);c=c+yyleng;}
[0-9] ;
[ \n\t] printf("%s",yytext);
. ;
%%
void main()
{
  yylex();
  printf("No of chars removed %d",c);
}
