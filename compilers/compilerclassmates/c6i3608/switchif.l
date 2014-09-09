%{
int flag=0;
char var[5];
%}
%%
"switch(" {flag=1;}
")" {flag=0;}
"case " {printf("if(%c==",var);}
[a-zA-Z] {
if(flag==1)
   var=yytext;
else
   printf("%s",yytext);
}
%%
main()
{
yylex();
}
