%{
int lower=0,upper=0,count=0;
%}

%%
[a-z]	{lower++;yymore();};
[A-Z]	{upper++;yymore();};
[ \t\n] {if(lower>0 && upper>0){count++;lower=0;upper=0;printf("%s ",yytext);}}
.	;
%%

int main()
{
yylex();
printf("Mixed=%d",count);
}
