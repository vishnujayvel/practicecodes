%{
int c=0;
%}
%%
[/] { c++;yymore();}
[ \n\t] { if(c==4)
{printf("%s",yytext);c=0;	} }
[^/] { yymore();}

%%
main()
{
yylex();
}
