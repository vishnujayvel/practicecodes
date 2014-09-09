%{
 int count=0,uc=0,lc=0;
%}
%%
[a-z] lc++;
[A-Z] uc++;
[ \n\t] { if(lc>0 && uc>0) { count++; 
uc=0;
lc=0;
}
%%
main()
{
yylex();
printf("\n no of words in mixed case=%d ",count)
}
