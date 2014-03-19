%{
%}
%%
[a-z] {printf("%c",yytext[0]-32); }
%%
int yywrap(){
return 1;
}
int main(){
 yylex();
}
