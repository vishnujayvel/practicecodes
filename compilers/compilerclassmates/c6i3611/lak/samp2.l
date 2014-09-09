%{
 int ch,wd,ln,no;
%}
%%
\n { ln++;ch++; }
[^ \t\n]+ { wd++;}
. { ch++; }
[a] {no++;}
%%
int main(void)
{
  yylex();
  printf("%d\t%d\t%d\t%d\n",ch,wd,ln,no);
return 0;
}
