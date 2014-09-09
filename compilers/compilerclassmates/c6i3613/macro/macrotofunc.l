%{

%}
data    void|int|float
%%
^{data} {
                printf("#define ");
                }
(return)        ;
.       ECHO;
\n      {ECHO;printf("\\");}

%%

int main()
{
yylex();
return 1;
}

