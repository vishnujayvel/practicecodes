%token INTEGER
%left '-' '+'
%left '*' '/'
%{
        #include <stdio.h>
        int yylex(void);
        void yyerror(char *);

%}

%%

program:
        program expr '\n' { printf("%d\n", $2); }
        |
        ;
expr:
        INTEGER         { $$ = $1; }
        | expr '+' expr { $$ = $1 + $3; }
        | expr '-' expr { $$ = $1 - $3; }
        | expr '*' expr { $$ = $1 * $3; }
        | expr '/' expr { if($3 == 0) printf("divide by zero\n"); else $$ = $1 / $3; }
        ;

%%

void yyerror(char* s)
{
        printf("%s\n", s);
}
int main()
{
        yyparse();
        return 0;
}

