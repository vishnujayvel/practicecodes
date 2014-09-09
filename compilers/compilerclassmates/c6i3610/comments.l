%{
int brac=0;
%}
%%
(\/\/) {brac=1;}
(\/\*) { brac=1;}
(\*\/) { brac=1;}
[\n]   { printf("%s",yytext);brac=0;}
[a-z] {if(brac==0) yymore();}
%%

int main(){
yylex();
return 1;
}
