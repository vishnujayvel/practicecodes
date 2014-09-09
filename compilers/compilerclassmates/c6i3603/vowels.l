%{
int c=0,v=0;
%}
%%
[aeiouAEIOU] { v++; yymore();}
[ \n\t] { if(v>=2){ c++;printf("%s",yytext);}
v=0;}
[^aeiouAEIOU] {yymore();} 
%%
main()
{
yylex();
printf("\n Number of words with atleast 2 vowels %d\n",c);
}
