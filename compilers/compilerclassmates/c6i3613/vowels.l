%{

int v=0,count=0;
%}
%%

[aeiouAEIOU]	{v++;yymore();}
[ \n\t]	{if(v>=2){count++;printf("%s ",yytext);}v=0;}
.	;
%%

int main()
{
yylex();
printf("Vowelss=%d",count);
return 0;
}
