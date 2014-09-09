alpha [a-zA-Z]
sp [\t\n]
all [,./a-zA-Z\t\n {}\(\)\+\-"'%!#@$^&\[\];:]
num [ 0-9]

%%
\/\/.*  ;
\/\*(.|{sp})*\*\/ ;
. ECHO;
%%

int yywrap()
{
        return 1;
}
int main()
{
        yylex();
        return 1;
}
