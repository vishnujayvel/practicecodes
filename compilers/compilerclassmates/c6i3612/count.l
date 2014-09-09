%{
int count=0;
%}
%%
^[kK]([a-zA-Z0-9]*) { count++; printf("%s",yytext);}
[ ]([kK])([a-zA-Z0-9]*) { count++; printf("%s",yytext);}
[ ][a-zAZ0-9]* { }
^[a-zA-Z0-9]* {}
%%
int main()
{
yylex();
printf("There were %d words that start with K or k\n",count);
return 0;
}
