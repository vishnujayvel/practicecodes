%token INTEGER VARIABLE
%left '+' '-'
%left '*' '/'
%{
void yyerror(char *);
int yylex(void);
int sym[26];

%}
%%
program:
program statement '\n'
|
;
statement:
expr { printf("%d\n", $1); }
| VARIABLE '=' expr { sym[$1] = $3; }
;
expr:
INTEGER
| VARIABLE { $$ = sym[$1]; }
| expr expr '+'  { $$ = $1 + $2; }
| expr expr '-'  { $$ = $1 - $2; }
| expr expr '*'  { $$ = $1 * $2; }
| expr expr '/'  { $$ = $1 / $2; }
;
%%
void yyerror(char *s) {

printf("%s\n",s);
}
int main(void) {
yyparse();
return 0;
}

