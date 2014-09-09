%{


int toggle=0;
%}
%%
"/*" {toggle=1;}
[a-zA-Z] {
if(toggle==0)
   printf("%s",yytext);
}
"*/" {toggle=0;}
%%
main()
{
yylex();
}
