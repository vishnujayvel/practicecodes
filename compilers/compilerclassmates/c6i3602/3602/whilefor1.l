%{
int whilefound=0;
%}
%%
while['(']1[')']  {whilefound=1;
                        printf("for(;;)");
                        }
while['('] {
                printf("for(;");
                whilefound=1;
        }
[')'] {
        if(whilefound)
                printf(";)");
        else
{
                printf("%c",yytext[0]);
        }
}
%%
main()
{
yylex();
}

