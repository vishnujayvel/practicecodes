%{
int brac=0;
%}
%%
(\/\/) {brac=1;}
(\/\*) {brac=1;}
(\*\/) {brac=1;}
[a-z] {if(brac==0) yymore();}
[\n]   { printf("%s",yytext);brac=0;}
%%

int main()
{
//yyin();
yylex();
return 1;
}

