%{
int count=0;
%}

%%
[a-z]	{printf("%c",yytext[0]-32);}
[A-Z]	{printf("%c",yytext[0]+32);}
.       |
\n	;
%%

int main()
{
yylex();
return 0;
}

