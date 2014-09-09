%{

  char c;
%}
small [a-z]
caps [A-Z]

%%

{small} { char c=yytext[0]; c=c-32; printf("%c",c); }
{caps} { char c=yytext[0]; c=c+32; printf("%c",c); }
. printf("%s",yytext);

%%

main()
{
  yylex();
}
