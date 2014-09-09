%{
  int c=0;
%}

letter [^ \t\n]
%%

[kK]{letter}* { printf("%s\n",yytext); c++; }
{letter}* ;
. ;
\n ;

%%

main()
{
 yylex ();
 printf("No of words that start with k,K is %d\n",c);
}
