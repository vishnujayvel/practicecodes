%token INTEGER
%left '+' '-'
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
        | expr  expr '+' { $$ = $1 + $2; }
        | expr  expr '-' { $$ = $1 - $2; }
        | expr  expr '*'{ $$ = $1 * $2; }
        | expr  expr '/' {  if($2 == 0) printf("ZERO ERROR\n"); else $$ = $1 / $2; }
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

