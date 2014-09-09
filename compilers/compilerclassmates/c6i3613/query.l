%{
int k=0;
char match[100];
%}

%%
(who)	{printf("%s",yytext);}
.	;
%%

int main()
{
yylex();
printf("%s",match);
return 1;
}
