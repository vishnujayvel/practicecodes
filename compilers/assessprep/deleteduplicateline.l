%%
^(.*)(\r?\n\1)+$ { ECHO; }
. { ; }
%%
int main(){
 yylex();

}

