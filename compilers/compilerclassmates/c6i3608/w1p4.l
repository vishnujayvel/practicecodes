%{
int lc,uc,wc;
%}
%%
[a-z] {lc++;}
[A-Z] {uc++;}
[ ] {if(lc>0 && uc>0)
{
printf("%s",yytext);
wc++;
}
lc=0;
uc=0;
}
%%
main()
{
yylex();
printf("No. if words : %d",wc);
}
