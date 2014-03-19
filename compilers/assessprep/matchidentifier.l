%{
%}
%%
[ \n\t][A-Za-z]+([0-9]|[A-Za-z_])* { ECHO; }
. ;
%%
int main(){
yylex();
}

