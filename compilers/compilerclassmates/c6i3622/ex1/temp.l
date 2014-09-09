%{
 int c=0;
%}

letter [a-zA-Z]
vowel [aeiouAEIOU]
%%

{letter}*{vowel}+{letter}*{vowel}+{letter}* { printf("%s\n",yytext); c++; }
. ;
\n ;

%%
main()
{
 yylex();
 printf("No of words with atleast 1 vowel %d\n",c);
}
