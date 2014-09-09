%{

%}

%%

[a-zA-Z]        { printf("%c",yytext[0]+3); }

%%

main()
{
        yylex();
}

