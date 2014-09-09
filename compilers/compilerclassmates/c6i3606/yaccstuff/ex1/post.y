%token INTEGER
%left '+' '-'
%left '*' '/'
%{
        #include<stdio.h>
        int yylex(void);
        void yyeror(char*);
%}
%%
program:
program statement '\n'
|
;
statement:
expr { printf("%d\n", $1); }
|
;
expr:
INTEGER
| expr expr '+' { $$ = $1 + $2; }
| expr expr '-'{ $$ = $1 - $2; }
| expr expr '*'{ $$ = $1 * $2; }
| expr expr '/'{ if($2==0) {printf("div by zero!\n"); $$=0;} else $$=$1/$2; }
| '(' expr ')' { $$ = $2; }
;
%%
void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
}
void main() {
yyparse();
} 
