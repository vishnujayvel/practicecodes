%{
int c=0,lc=0,uc=0;
%}
%%
[a-z] {lc++;yymore();}
[A-Z] {uc++;yymore();}
[ \n\t] {if(lc>0&&uc>0){printf("%s",yytext); c++;}
	lc=0;
	uc=0;}
%%
int main()
{
yylex();
printf(" The no of words with mixed cases is %d ", c);
return 0;
}
