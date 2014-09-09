%{
int c=0,v=0;
%}
%%
[aeiouAEIOU] { v++; yymore();}
[ \n\t] { if(v>=2){ c++;
yyless(2);printf("%s",yytext);}
v=0;}
[^aeiouAEIOU] {yymore();} 
%%
main()
{
yylex();
}
