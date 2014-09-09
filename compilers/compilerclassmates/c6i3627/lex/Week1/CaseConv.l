lower [a-z]
upper [A-Z]
newline [\n\t ]
%%
{lower} {printf("%c",yytext[0]-32);}
{upper} {printf("%c",yytext[0]+32);}
{newline} ECHO;
. ECHO;

%%
int yywrap()
{
return 1;
}
main()
{
yylex();
}
